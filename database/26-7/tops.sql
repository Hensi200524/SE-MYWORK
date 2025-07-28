-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 28, 2025 at 07:05 PM
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
-- Database: `tops`
--

-- --------------------------------------------------------

--
-- Table structure for table `emp_details`
--

CREATE TABLE `emp_details` (
  `EMPNO` int(100) NOT NULL,
  `FIRST_NAME` varchar(200) NOT NULL,
  `LAST_NAME` varchar(200) NOT NULL,
  `DESIGNATION` varchar(255) NOT NULL,
  `HIREDATE` varchar(500) NOT NULL,
  `SALARY` varchar(500) NOT NULL,
  `COMM` varchar(500) NOT NULL,
  `DEPTNO` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `emp_details`
--

INSERT INTO `emp_details` (`EMPNO`, `FIRST_NAME`, `LAST_NAME`, `DESIGNATION`, `HIREDATE`, `SALARY`, `COMM`, `DEPTNO`) VALUES
(1, 'STEFAN', 'SALVATORE', 'BUSSINESS ANALYST', '17-NOV-97', '50000', '-', 40),
(3, 'DIANA', 'LORRENCE', 'TECHNICAL ARCHITECT', '01-MAY-00', '70000', '-', 10),
(4, 'JAMES', 'MADINSAON', 'MANAGER', '19-JUN-88', '80400', '-', 40),
(5, 'JONES', 'NICK', 'HR ANALYST', '02-JAN-03', '47000', '-', 30),
(6, 'LUCY', 'GELLLER', 'HR ASSOCIATE', '13-JUL-08', '35000', '200', 30),
(7, 'ISAAC', 'STEFAN', 'TRAINEE', '13-DEC-15', '20000', '-', 40),
(8, 'JOHN', 'SMITH', 'CLERK', '17-DEC-05', '12000', '-', 10),
(9, 'NANCY', 'GILLBERT', 'SALESMAN', '20-FEB-81', '18000', '300', 10);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `emp_details`
--
ALTER TABLE `emp_details`
  ADD PRIMARY KEY (`EMPNO`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `emp_details`
--
ALTER TABLE `emp_details`
  MODIFY `EMPNO` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
