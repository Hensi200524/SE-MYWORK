-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 06, 2025 at 04:31 PM
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
  `first_name` varchar(50) DEFAULT NULL,
  `last_name` varchar(50) DEFAULT NULL,
  `country` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `authors`
--

INSERT INTO `authors` (`author_id`, `first_name`, `last_name`, `country`) VALUES
(1, 'BHavesh', 'Jogel', 'India'),
(2, 'Bhavna', 'Panara', 'America'),
(3, 'Chirag', 'Gohel', 'Canada');

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
  `genre` varchar(50) DEFAULT NULL
) ;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `title`, `author`, `publisher`, `year_of_publication`, `price`, `genre`) VALUES
(2, '1984', 'George Orwell', 'Secker & Warburg', 1949, 108.90, 'Science'),
(4, 'The Alchemist', 'Paulo Coelho', 'HarperOne', 2021, 175.25, 'Fantasy'),
(5, 'Pride and Prejudice', 'Harper Lee', 'T. Egerton', 1813, 165.00, 'History');

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

--
-- Indexes for dumped tables
--

--
-- Indexes for table `authors`
--
ALTER TABLE `authors`
  ADD PRIMARY KEY (`author_id`);

--
-- Indexes for table `books`
--
ALTER TABLE `books`
  ADD PRIMARY KEY (`book_id`);

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
