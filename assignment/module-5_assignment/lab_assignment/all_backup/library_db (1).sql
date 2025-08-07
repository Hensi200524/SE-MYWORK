-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 07, 2025 at 10:45 AM
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
-- Database: `library_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `chk_book_price` ()   BEGIN

	DECLARE v_price decimal (10,2) DEFAULT 120.00;
	DECLARE v_msj varchar(255);
    
    IF v_price > 100 THEN
		SET v_msj = 'This Book Is Expensive';
    ELSE
    	SET v_msj = 'This Book Is Affordable';
    END IF;
    
    SELECT v_msj AS price_status;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `count_books` ()   BEGIN
    DECLARE total_books INT;
    
    SELECT COUNT(*) INTO total_books FROM books;
    
    SELECT CONCAT('Total number of books: ', total_books) AS result;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `display_all_books` ()   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_id INT;
    DECLARE v_title VARCHAR(255);
    DECLARE v_author VARCHAR(255);
    DECLARE v_price DECIMAL(10,2);

    DECLARE book_cursor CURSOR FOR
        SELECT book_id, title, author, price FROM books;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN book_cursor;

    read_loop: LOOP
        FETCH book_cursor INTO v_id, v_title, v_author, v_price;

        IF done THEN
            LEAVE read_loop;
        END IF;

        -- Display book details
        SELECT CONCAT('Book ID: ', v_id) AS Book_ID,
               CONCAT('Title: ', v_title) AS Title,
               CONCAT('Author: ', v_author) AS Author,
               CONCAT('Price: $', v_price) AS Price;
    END LOOP;

    CLOSE book_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `display_all_members` ()   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_id INT;
    DECLARE v_name VARCHAR(255);
    DECLARE v_date DATE;
    DECLARE v_email VARCHAR(255);

    DECLARE member_cursor CURSOR FOR
        SELECT member_id, member_name, date_of_membership, email FROM members;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN member_cursor;

    label: LOOP
        FETCH member_cursor INTO v_id, v_name, v_date, v_email;

        IF done THEN
            LEAVE label;
        END IF;

        SELECT 
            CONCAT('Member ID: ', v_id) AS Member_ID,
            CONCAT('Name: ', v_name) AS Name,
            CONCAT('Membership Date: ', v_date) AS Membership_Date,
            CONCAT('Email: ', v_email) AS Email;
    END LOOP;

    CLOSE member_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `display_book_info` ()   BEGIN
   DECLARE v_book_id INT DEFAULT 101;
   DECLARE v_price DECIMAL(10,2) DEFAULT 299.99;

   SELECT CONCAT('Book ID: ', v_book_id) AS book_id_result,
          CONCAT('Price: ', v_price) AS price_result;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `getbookauthor1` (IN `authorname` VARCHAR(100))   BEGIN
	SELECT title,author FROM books WHERE author= authorname;
    
   END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `getbookbyauthor` (IN `authorname` VARCHAR(100))   BEGIN
	SELECT * FROM books JOIN authors ON books.author_id= authors.author_id WHERE books.author = authorname;
    
   END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `get_books_by_author` (IN `input_author` VARCHAR(255))   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_title VARCHAR(255);

    DECLARE book_cursor CURSOR FOR
        SELECT title FROM books WHERE author = input_author;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN book_cursor;

    label: LOOP
        FETCH book_cursor INTO v_title;

        IF done THEN
            LEAVE label;
        END IF;

        SELECT CONCAT('Book Title: ', v_title) AS Title;
    END LOOP;

    CLOSE book_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `get_book_price` (IN `input_book_id` INT)   BEGIN
    SELECT price 
    FROM books 
    WHERE book_id = input_book_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `get_book_price1` (IN `input_book_id` DECIMAL(8,2))   BEGIN
    SELECT price 
    FROM books 
    WHERE book_id = input_book_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `insert_book` ()   BEGIN
	DECLARE v_book_id int DEFAULT 101;
    DECLARE  v_title varchar(100) DEFAULT 'The Art my Mysql';
    DECLARE v_author varchar(100) DEFAULT 'prakruti vyas';
    DECLARE v_price decimal(8,2) DEFAULT 1200;
    
    INSERT INTO books(book_id,title,author,price)VALUES(v_book_id,v_title,v_author,v_price);
    
    SELECT concat('BOOK"',v_title,'"has been sucessfully inserted') AS Message;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `price_arithmetic` ()   BEGIN
    -- Declare constants
    DECLARE c_price1 DECIMAL(10,2) DEFAULT 300.00;
    DECLARE c_price2 DECIMAL(10,2) DEFAULT 450.00;

    -- Declare result variables
    DECLARE v_total DECIMAL(10,2);
    DECLARE v_difference DECIMAL(10,2);
    DECLARE v_average DECIMAL(10,2);

    -- Perform arithmetic
    SET v_total = c_price1 + c_price2;
    SET v_difference = c_price2 - c_price1;
    SET v_average = (c_price1 + c_price2) / 2;

    -- Display results
    SELECT 
        CONCAT('Total Price: ₹', v_total) AS Total_Price,
        CONCAT('Price Difference: ₹', v_difference) AS Price_Difference,
        CONCAT('Average Price: ₹', v_average) AS Average_Price;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `total_sale` ()   BEGIN

  SELECT SUM(Quantity) AS total_sale FROM orderdetails;

END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `authors`
--

CREATE TABLE `authors` (
  `author_id` int(11) NOT NULL,
  `first_name` varchar(255) NOT NULL,
  `last_name` varchar(50) DEFAULT NULL,
  `country` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `authors`
--

INSERT INTO `authors` (`author_id`, `first_name`, `last_name`, `country`) VALUES
(1, 'George Orwell', 'Jogel', 'India'),
(2, 'Paulo Coelho', 'Panara', 'America'),
(3, '', 'Gohel', 'Canada');

-- --------------------------------------------------------

--
-- Table structure for table `books`
--

CREATE TABLE `books` (
  `book_id` int(11) NOT NULL,
  `title` varchar(100) DEFAULT NULL,
  `author` varchar(200) DEFAULT NULL,
  `publisher` varchar(500) DEFAULT NULL,
  `year_of_publication` int(100) DEFAULT NULL,
  `price` decimal(8,2) DEFAULT NULL,
  `genre` varchar(50) DEFAULT NULL,
  `author_id` int(11) DEFAULT NULL,
  `last_modified` datetime DEFAULT current_timestamp()
) ;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `title`, `author`, `publisher`, `year_of_publication`, `price`, `genre`, `author_id`, `last_modified`) VALUES
(4, 'The Alchemist', 'Paulo Coelho', 'HarperOne', 2021, 175.25, 'Fantasy', 4, '2025-08-07 12:16:12'),
(5, 'Pride and Prejudice', 'Bhavna panara', 'T. Egerton', 1813, 50.00, 'History', 3, '2025-08-07 12:16:12'),
(6, 'The Hobbit', 'divya parmar', 'hensi', 2007, 1500.00, 'Science', 2, '2025-08-07 12:29:55'),
(101, 'The Art my Mysql', 'prakruti vyas', NULL, NULL, 1200.00, NULL, NULL, '2025-08-07 13:27:02');

--
-- Triggers `books`
--
DELIMITER $$
CREATE TRIGGER `delete_tri` AFTER DELETE ON `books` FOR EACH ROW BEGIN
INSERT INTO delete_log_change(book_id,title,author,price,action,delete_time)
VALUES(OLD.book_id,OLD.title,OLD.author,OLD.price,'DELETED',CURRENT_TIMESTAMP);
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_time` BEFORE UPDATE ON `books` FOR EACH ROW BEGIN 
SET NEW.last_modified = CURRENT_TIMESTAMP;
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_tri` AFTER UPDATE ON `books` FOR EACH ROW BEGIN
INSERT INTO book_update_log(book_id,old_title,new_title,update_time)
VALUES(OLD.book_id,OLD.title,new.title,CURRENT_TIMESTAMP);
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `book_update_log`
--

CREATE TABLE `book_update_log` (
  `log_id` int(11) NOT NULL,
  `book_id` int(11) NOT NULL,
  `old_title` varchar(100) NOT NULL,
  `new_title` varchar(100) NOT NULL,
  `update_time` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `book_update_log`
--

INSERT INTO `book_update_log` (`log_id`, `book_id`, `old_title`, `new_title`, `update_time`) VALUES
(1, 6, 'The Hobbit', 'The Hobbit', '2025-08-07 12:29:55'),
(2, 2, '1984', '1978', '2025-08-07 12:30:31');

-- --------------------------------------------------------

--
-- Table structure for table `delete_log_change`
--

CREATE TABLE `delete_log_change` (
  `log_id` int(11) NOT NULL,
  `book_id` int(11) NOT NULL,
  `title` varchar(100) NOT NULL,
  `author` varchar(100) NOT NULL,
  `price` decimal(8,2) NOT NULL,
  `action` varchar(50) NOT NULL,
  `delete_time` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `delete_log_change`
--

INSERT INTO `delete_log_change` (`log_id`, `book_id`, `title`, `author`, `price`, `action`, `delete_time`) VALUES
(1, 2, '1978', 'George Orwell', 100.00, 'DELETED', '2025-08-07 12:39:35');

-- --------------------------------------------------------

--
-- Table structure for table `members`
--

CREATE TABLE `members` (
  `member_id` int(11) NOT NULL,
  `member_name` varchar(200) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members`
--

INSERT INTO `members` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Nisha Mehta', '2023-01-10', 'nish12@gmail.com'),
(3, 'Pooja Gohel', '2023-03-15', 'poojad12@gmail.com'),
(4, 'Pooja Desai', '2023-04-20', 'pooja.desai@gmail.com'),
(5, 'Karan Joshi', '2023-05-25', 'karan.joshi@gmail.com');

-- --------------------------------------------------------

--
-- Table structure for table `members_backup`
--

CREATE TABLE `members_backup` (
  `member_id` int(11) NOT NULL DEFAULT 0,
  `member_name` varchar(200) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members_backup`
--

INSERT INTO `members_backup` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Nisha Mehta', '2023-01-10', 'nish12@gmail.com'),
(2, 'Raj Pandya', '2019-02-05', 'pandya6@gmail.com'),
(3, 'Pooja Gohel', '2023-03-15', 'poojad12@gmail.com'),
(4, 'Pooja Desai', '2023-04-20', 'pooja.desai@gmail.com'),
(5, 'Karan Joshi', '2023-05-25', 'karan.joshi@gmail.com'),
(6, 'Brijesh Parekh', '2019-09-16', 'birju@gmail.com');

-- --------------------------------------------------------

--
-- Stand-in structure for view `members_before_2020`
-- (See below for the actual view)
--
CREATE TABLE `members_before_2020` (
`member_id` int(11)
,`member_name` varchar(200)
,`date_of_membership` date
,`email` varchar(100)
);

-- --------------------------------------------------------

--
-- Table structure for table `orderdetails`
--

CREATE TABLE `orderdetails` (
  `OrderID` int(11) DEFAULT NULL,
  `Quantity` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orderdetails`
--

INSERT INTO `orderdetails` (`OrderID`, `Quantity`) VALUES
(101, 25),
(102, 30),
(103, 35),
(104, 10),
(105, 50);

-- --------------------------------------------------------

--
-- Table structure for table `publishers`
--

CREATE TABLE `publishers` (
  `publisher_id` int(11) NOT NULL,
  `publisher_name` varchar(50) DEFAULT NULL,
  `contact_number` varchar(15) DEFAULT NULL,
  `address` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Stand-in structure for view `view_books_info`
-- (See below for the actual view)
--
CREATE TABLE `view_books_info` (
`title` varchar(100)
,`author` varchar(200)
,`price` decimal(8,2)
);

-- --------------------------------------------------------

--
-- Structure for view `members_before_2020`
--
DROP TABLE IF EXISTS `members_before_2020`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `members_before_2020`  AS SELECT `members`.`member_id` AS `member_id`, `members`.`member_name` AS `member_name`, `members`.`date_of_membership` AS `date_of_membership`, `members`.`email` AS `email` FROM `members` WHERE `members`.`date_of_membership` < '2024-01-01' ;

-- --------------------------------------------------------

--
-- Structure for view `view_books_info`
--
DROP TABLE IF EXISTS `view_books_info`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `view_books_info`  AS SELECT `books`.`title` AS `title`, `books`.`author` AS `author`, `books`.`price` AS `price` FROM `books` ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `authors`
--
ALTER TABLE `authors`
  ADD PRIMARY KEY (`author_id`),
  ADD KEY `first_name` (`first_name`);

--
-- Indexes for table `books`
--
ALTER TABLE `books`
  ADD PRIMARY KEY (`book_id`),
  ADD KEY `author_id` (`author_id`);

--
-- Indexes for table `book_update_log`
--
ALTER TABLE `book_update_log`
  ADD PRIMARY KEY (`log_id`);

--
-- Indexes for table `delete_log_change`
--
ALTER TABLE `delete_log_change`
  ADD PRIMARY KEY (`log_id`);

--
-- Indexes for table `members`
--
ALTER TABLE `members`
  ADD PRIMARY KEY (`member_id`),
  ADD UNIQUE KEY `unq_email` (`email`);

--
-- Indexes for table `publishers`
--
ALTER TABLE `publishers`
  ADD PRIMARY KEY (`publisher_id`),
  ADD UNIQUE KEY `contact_number` (`contact_number`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `authors`
--
ALTER TABLE `authors`
  MODIFY `author_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `books`
--
ALTER TABLE `books`
  MODIFY `book_id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `book_update_log`
--
ALTER TABLE `book_update_log`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `delete_log_change`
--
ALTER TABLE `delete_log_change`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `members`
--
ALTER TABLE `members`
  MODIFY `member_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT for table `publishers`
--
ALTER TABLE `publishers`
  MODIFY `publisher_id` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
