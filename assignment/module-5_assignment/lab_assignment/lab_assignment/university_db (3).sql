-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 06, 2025 at 04:32 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `university_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `CheckDepartment` (IN `p_emp_id` INT)   BEGIN
  DECLARE v_dept_id INT;

  -- Get the department ID of the given employee
  SELECT dept_id INTO v_dept_id
  FROM employees
  WHERE emp_id = p_emp_id;

  -- Check department and print message
  IF v_dept_id = 1 THEN
    SELECT 'Employee is in HR Department.' AS Message;
  ELSEIF v_dept_id = 2 THEN
    SELECT 'Employee is in IT Department.' AS Message;
  ELSEIF v_dept_id = 3 THEN
    SELECT 'Employee is in Finance Department.' AS Message;
  ELSE
    SELECT 'Employee is in another Department.' AS Message;
  END IF;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetCourseById` (IN `cid` INT)   BEGIN
    SELECT * 
    FROM courses 
    WHERE course_id = cid;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetEmployeesByDepartment` (IN `dept` INT)   BEGIN
    SELECT * 
    FROM employees 
    WHERE dept_id = dept;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetTotalEmployees` ()   BEGIN
  DECLARE total_employees INT;

  SELECT COUNT(emp_id) INTO total_employees FROM employees;

  SELECT CONCAT('Total number of employees: ', total_employees) AS Result;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `ShowEmployeeNames` ()   BEGIN
  DECLARE emp_name_var VARCHAR(100);
  DECLARE done INT DEFAULT 0;

  -- Declare a cursor
  DECLARE emp_cursor CURSOR FOR SELECT emp_name FROM employees;

  -- Declare a continue handler to exit the loop
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;

  -- Open the cursor
  OPEN emp_cursor;

  read_loop: LOOP
    FETCH emp_cursor INTO emp_name_var;
    IF done THEN
      LEAVE read_loop;
    END IF;
    SELECT emp_name_var AS 'Employee Name';
  END LOOP;

  -- Close the cursor
  CLOSE emp_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `show_courses` ()   BEGIN
  DECLARE done INT DEFAULT FALSE;
  DECLARE v_id INT;
  DECLARE v_name VARCHAR(100);
  DECLARE v_duration VARCHAR(50);

  -- Cursor to get all courses
  DECLARE course_cursor CURSOR FOR
    SELECT course_id, course_name, course_duration FROM courses;

  -- Handler for end of data
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

  -- Open the cursor
  OPEN course_cursor;

  read_loop: LOOP
    FETCH course_cursor INTO v_id, v_name, v_duration;
    
    IF done THEN
      LEAVE read_loop;
    END IF;

    -- Show course details
    SELECT v_id AS Course_ID, 
           v_name AS Course_Name, 
           v_duration AS Duration;

  END LOOP;

  -- Close the cursor
  CLOSE course_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `show_employees` ()   BEGIN
  DECLARE done INT DEFAULT FALSE;
  DECLARE v_id INT;
  DECLARE v_name VARCHAR(100);
  DECLARE v_dept INT;
  DECLARE v_salary DECIMAL(10,2);

  DECLARE emp_cursor CURSOR FOR
    SELECT emp_id, emp_name, dept_id, salary FROM employees;

  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

  OPEN emp_cursor;

  read_loop: LOOP
    FETCH emp_cursor INTO v_id, v_name, v_dept, v_salary;
    IF done THEN
      LEAVE read_loop;
    END IF;

    -- Show employee details
    SELECT v_id AS Emp_ID, 
           v_name AS Name, 
           v_dept AS Dept_ID, 
           v_salary AS Salary;

  END LOOP;

  CLOSE emp_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `total_emp` ()   BEGIN
  DECLARE total_employees INT;

  SELECT COUNT(emp_id) AS total_employees FROM employees;

 
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `course_id` int(11) NOT NULL,
  `course_name` varchar(50) DEFAULT NULL,
  `course_duration` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`course_id`, `course_name`, `course_duration`) VALUES
(101, 'DATABASE MANAGEMENT', '3 MONTHS'),
(102, 'WEB DEVLOPMENT', '5 MONTHS'),
(103, 'PYTHON PROGRAMMING', '2 MONTHS');

-- --------------------------------------------------------

--
-- Table structure for table `departments`
--

CREATE TABLE `departments` (
  `dept_id` int(11) NOT NULL,
  `dept_name` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `departments`
--

INSERT INTO `departments` (`dept_id`, `dept_name`) VALUES
(1, 'HR'),
(2, 'IT'),
(3, 'FINANCE');

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `emp_id` int(11) NOT NULL,
  `emp_name` varchar(50) DEFAULT NULL,
  `dept_id` int(11) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`emp_id`, `emp_name`, `dept_id`, `salary`, `last_modified`) VALUES
(101, 'Hensi', 2, 10000, '2025-08-06 07:32:49'),
(102, 'mahi', 1, 50000, '2025-08-06 07:40:00'),
(103, 'Jitendra', 4, 90000, '2025-08-06 07:32:49'),
(104, 'Sonal', 3, 100000, '2025-08-06 07:32:49'),
(105, 'Michael', 1, 6000, '2025-08-06 07:36:04'),
(106, 'Diya', 106, 65000, '2025-08-06 07:38:59');

--
-- Triggers `employees`
--
DELIMITER $$
CREATE TRIGGER `after_employee_insert` AFTER INSERT ON `employees` FOR EACH ROW BEGIN
    INSERT INTO employee_log (emp_id, emp_name, action_type)
    VALUES (NEW.emp_id, NEW.emp_name, 'INSERT');
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `before_employee_update` BEFORE UPDATE ON `employees` FOR EACH ROW BEGIN
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `employee_log`
--

CREATE TABLE `employee_log` (
  `log_id` int(11) NOT NULL,
  `emp_id` int(11) DEFAULT NULL,
  `emp_name` varchar(100) DEFAULT NULL,
  `action_type` varchar(20) DEFAULT NULL,
  `action_time` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee_log`
--

INSERT INTO `employee_log` (`log_id`, `emp_id`, `emp_name`, `action_type`, `action_time`) VALUES
(1, 106, 'Ved', 'INSERT', '2025-08-06 07:26:20');

-- --------------------------------------------------------

--
-- Stand-in structure for view `emp_dept_view`
-- (See below for the actual view)
--
CREATE TABLE `emp_dept_view` (
`emp_id` int(11)
,`emp_name` varchar(50)
,`dept_name` varchar(50)
,`salary` int(11)
);

-- --------------------------------------------------------

--
-- Structure for view `emp_dept_view`
--
DROP TABLE IF EXISTS `emp_dept_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `emp_dept_view`  AS SELECT `e`.`emp_id` AS `emp_id`, `e`.`emp_name` AS `emp_name`, `d`.`dept_name` AS `dept_name`, `e`.`salary` AS `salary` FROM (`employees` `e` join `departments` `d` on(`e`.`dept_id` = `d`.`dept_id`)) WHERE `e`.`salary` < 50000 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `departments`
--
ALTER TABLE `departments`
  ADD PRIMARY KEY (`dept_id`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`emp_id`),
  ADD KEY `dept_id` (`dept_id`);

--
-- Indexes for table `employee_log`
--
ALTER TABLE `employee_log`
  ADD PRIMARY KEY (`log_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `courses`
--
ALTER TABLE `courses`
  MODIFY `course_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=105;

--
-- AUTO_INCREMENT for table `departments`
--
ALTER TABLE `departments`
  MODIFY `dept_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `employees`
--
ALTER TABLE `employees`
  MODIFY `emp_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=107;

--
-- AUTO_INCREMENT for table `employee_log`
--
ALTER TABLE `employee_log`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
