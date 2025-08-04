-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 04, 2025 at 01:35 PM
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
-- Database: `mydb`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `add_pro` ()   BEGIN
  DECLARE a INT DEFAULT 1;

  simple_loop: LOOP     
    INSERT INTO Geektable VALUES(a);
    SET a = a + 1;

    IF a = 11 THEN
      LEAVE simple_loop;
    END IF;
  END LOOP simple_loop;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `curpro_procedure` ()   BEGIN
      DECLARE done INT DEFAULT 0;
      DECLARE tutorialID INTEGER;
      DECLARE tutorialTitle, tutorialAuthor, 
	  tutorialDate VARCHAR(20);
      DECLARE cur CURSOR FOR SELECT * FROM tutorials;
      DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;
      OPEN cur;
      label: LOOP
      FETCH cur INTO tutorialID, tutorialTitle, tutorialAuthor, 
	  tutorialDate;
      INSERT INTO backup VALUES(tutorialID, tutorialTitle, 
	  tutorialAuthor, tutorialDate);
      IF done = 1 THEN LEAVE label;
      END IF;
      END LOOP;
      CLOSE cur;
   END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `DELETEPROC` (INOUT `myid` INT)   BEGIN
    	
       DELETE FROM products WHERE id = myid;

        
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `INSERTPROC` (INOUT `myid` INT)   BEGIN
    	
        INSERT into products(p_name,p_category,p_price) values (myid,'sportshoes','399');
        
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `myPROC` (INOUT `myid` INT)   BEGIN
    	
        INSERT into products(p_name,p_category,p_price) VALUES(myid,'western','clothes','600');
        
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `SELECTPROC` (INOUT `myid` INT)   BEGIN
    	
       SELECT *  FROM products WHERE id = myid;

        
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `UPDATEPROC` (INOUT `myid` INT)   BEGIN
    	
       UPDATE products SET p_category='Electronics' WHERE id = myid;

        
    END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `audit_subscribers`
--

CREATE TABLE `audit_subscribers` (
  `id` int(11) NOT NULL,
  `subscriber_name` varchar(200) NOT NULL,
  `action_performed` varchar(400) NOT NULL,
  `date_added` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `audit_subscribers`
--

INSERT INTO `audit_subscribers` (`id`, `subscriber_name`, `action_performed`, `date_added`) VALUES
(1, 'Divya', 'Insert a new subsciber', '2025-08-01 11:48:20'),
(2, 'Divya', 'update a new subscriber', '2025-08-01 11:56:17'),
(3, 'Divya', 'delete a new subsciber', '2025-08-01 11:58:23');

-- --------------------------------------------------------

--
-- Table structure for table `backup`
--

CREATE TABLE `backup` (
  `ID` int(11) DEFAULT NULL,
  `TITLE` varchar(100) DEFAULT NULL,
  `AUTHOR` varchar(40) DEFAULT NULL,
  `DATE` varchar(40) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `backup`
--

INSERT INTO `backup` (`ID`, `TITLE`, `AUTHOR`, `DATE`) VALUES
(1, 'Java', 'Krishna', '2019-09-01'),
(2, 'JFreeCharts', 'Satish', '2019-05-01'),
(3, 'JavaSprings', 'Amit', '2019-05-01'),
(4, 'Android', 'Ram', '2019-03-01'),
(5, 'Cassandra', 'Pruthvi', '2019-04-06'),
(5, 'Cassandra', 'Pruthvi', '2019-04-06'),
(1, 'Java', 'Krishna', '2019-09-01'),
(2, 'JFreeCharts', 'Satish', '2019-05-01'),
(3, 'JavaSprings', 'Amit', '2019-05-01'),
(4, 'Android', 'Ram', '2019-03-01'),
(5, 'Cassandra', 'Pruthvi', '2019-04-06'),
(5, 'Cassandra', 'Pruthvi', '2019-04-06'),
(1, 'Java', 'Krishna', '2019-09-01'),
(2, 'JFreeCharts', 'Satish', '2019-05-01'),
(3, 'JavaSprings', 'Amit', '2019-05-01'),
(4, 'Android', 'Ram', '2019-03-01'),
(4, 'Android', 'Ram', '2019-03-01');

-- --------------------------------------------------------

--
-- Table structure for table `customers`
--

CREATE TABLE `customers` (
  `CustomerID` int(11) NOT NULL,
  `CustomerName` varchar(100) DEFAULT NULL,
  `Country` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customers`
--

INSERT INTO `customers` (`CustomerID`, `CustomerName`, `Country`) VALUES
(1, 'Chetna', 'USA'),
(2, 'Manav', 'USA'),
(3, 'Kavya', 'India'),
(4, 'Kinjal', 'India'),
(5, 'Pravin', 'India'),
(6, 'Prasant', 'India'),
(7, 'Jinal', 'India'),
(8, 'Chaya', 'India'),
(9, 'Hima', 'Canada'),
(10, 'BHargav', 'USA');

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `id` int(11) NOT NULL,
  `eno` int(10) DEFAULT NULL,
  `First_Name` varchar(200) DEFAULT NULL,
  `Last_Name` varchar(200) DEFAULT NULL,
  `Surname` varchar(200) DEFAULT NULL,
  `Designation` varchar(255) DEFAULT NULL,
  `Hiredate` varchar(100) DEFAULT NULL,
  `Salary` varchar(1000) DEFAULT NULL,
  `Comm` int(200) DEFAULT NULL,
  `Deptno` int(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`id`, `eno`, `First_Name`, `Last_Name`, `Surname`, `Designation`, `Hiredate`, `Salary`, `Comm`, `Deptno`) VALUES
(1, 101, 'divya', 'kiranbhai', 'parmar', 'python_devloper', '29-06-2025', '5000', 0, 60),
(2, 102, 'Hensi', 'Girishbhai', 'Vaghela', 'web_devloper', '24-01-2020', '60000', 0, 40),
(3, 103, 'Devndra', 'Parthbhai', 'Gohel', 'designer', '24-04-2016', '30000', 56, 6),
(4, 104, 'Poonam', 'manavbhai', 'poojara', 'app_devlopment', '45-01-2004', '50000', 0, 12);

-- --------------------------------------------------------

--
-- Stand-in structure for view `emp_view`
-- (See below for the actual view)
--
CREATE TABLE `emp_view` (
`First_Name` varchar(200)
,`Designation` varchar(255)
);

-- --------------------------------------------------------

--
-- Stand-in structure for view `e_view`
-- (See below for the actual view)
--
CREATE TABLE `e_view` (
`First_Name` varchar(200)
,`Designation` varchar(255)
);

-- --------------------------------------------------------

--
-- Table structure for table `geektable`
--

CREATE TABLE `geektable` (
  `value` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `geektable`
--

INSERT INTO `geektable` (`value`) VALUES
('1'),
('2'),
('3'),
('4'),
('5'),
('6'),
('7'),
('8'),
('9'),
('10');

-- --------------------------------------------------------

--
-- Table structure for table `location`
--

CREATE TABLE `location` (
  `l_id` int(11) NOT NULL,
  `City` varchar(100) NOT NULL,
  `PIN_code` int(100) NOT NULL,
  `id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `location`
--

INSERT INTO `location` (`l_id`, `City`, `PIN_code`, `id`) VALUES
(1, 'Morbi', 363642, 2),
(2, 'Rajkot', 360007, 9),
(3, 'Jamnagr', 361004, 4);

-- --------------------------------------------------------

--
-- Table structure for table `products`
--

CREATE TABLE `products` (
  `id` int(11) NOT NULL,
  `p_name` varchar(100) DEFAULT NULL,
  `p_category` varchar(100) DEFAULT NULL,
  `p_price` int(200) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `products`
--

INSERT INTO `products` (`id`, `p_name`, `p_category`, `p_price`) VALUES
(1, 'Running shose', 'footware', 2500),
(2, 'Jeans', 'cloth', 2000),
(3, 'Mouse', 'Electronics', 599),
(4, 'Backpack', 'Accessories', 278),
(8, '6', 'sportshoes', 399),
(9, '8', 'sportshoes', 399),
(10, '7', 'sportshoes', 399);

-- --------------------------------------------------------

--
-- Table structure for table `subscribers`
--

CREATE TABLE `subscribers` (
  `id` int(11) NOT NULL,
  `fname` varchar(255) NOT NULL,
  `email` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `subscribers`
--

INSERT INTO `subscribers` (`id`, `fname`, `email`) VALUES
(1, 'Hensi', 'h@gmail.com');

--
-- Triggers `subscribers`
--
DELIMITER $$
CREATE TRIGGER `deletetrigger` AFTER DELETE ON `subscribers` FOR EACH ROW BEGIN

	INSERT INTO audit_subscribers SET action_performed = 'delete a new subsciber', subscriber_name = old.fname;
    
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `insert_trigger` BEFORE INSERT ON `subscribers` FOR EACH ROW BEGIN

	INSERT INTO audit_subscribers SET action_performed = 'Insert a new subsciber', subscriber_name = new.fname;
    
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `updatetrigger` AFTER UPDATE ON `subscribers` FOR EACH ROW BEGIN

	INSERT INTO audit_subscribers SET action_performed = 'update a new subscriber', subscriber_name = old.fname;
    
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `tutorials`
--

CREATE TABLE `tutorials` (
  `ID` int(11) NOT NULL,
  `TITLE` varchar(100) DEFAULT NULL,
  `AUTHOR` varchar(40) DEFAULT NULL,
  `DATE` varchar(40) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tutorials`
--

INSERT INTO `tutorials` (`ID`, `TITLE`, `AUTHOR`, `DATE`) VALUES
(1, 'Java', 'Krishna', '2019-09-01'),
(2, 'JFreeCharts', 'Satish', '2019-05-01'),
(3, 'JavaSprings', 'Amit', '2019-05-01'),
(4, 'Android', 'Ram', '2019-03-01');

-- --------------------------------------------------------

--
-- Structure for view `emp_view`
--
DROP TABLE IF EXISTS `emp_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `emp_view`  AS SELECT `employee`.`First_Name` AS `First_Name`, `employee`.`Designation` AS `Designation` FROM `employee` ;

-- --------------------------------------------------------

--
-- Structure for view `e_view`
--
DROP TABLE IF EXISTS `e_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `e_view`  AS SELECT `employee`.`First_Name` AS `First_Name`, `employee`.`Designation` AS `Designation` FROM `employee` ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `audit_subscribers`
--
ALTER TABLE `audit_subscribers`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `customers`
--
ALTER TABLE `customers`
  ADD PRIMARY KEY (`CustomerID`);

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `location`
--
ALTER TABLE `location`
  ADD PRIMARY KEY (`l_id`),
  ADD KEY `id` (`id`);

--
-- Indexes for table `products`
--
ALTER TABLE `products`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `subscribers`
--
ALTER TABLE `subscribers`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tutorials`
--
ALTER TABLE `tutorials`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `audit_subscribers`
--
ALTER TABLE `audit_subscribers`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `customers`
--
ALTER TABLE `customers`
  MODIFY `CustomerID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `location`
--
ALTER TABLE `location`
  MODIFY `l_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `products`
--
ALTER TABLE `products`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `subscribers`
--
ALTER TABLE `subscribers`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
