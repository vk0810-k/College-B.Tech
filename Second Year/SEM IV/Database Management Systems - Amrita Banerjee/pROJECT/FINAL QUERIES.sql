/*which book used
SELECT bookdirectory.BookTitle FROM bookdirectory,bookinventory WHERE 
bookdirectory.BookCode = bookinventory.BookCode AND bookinventory.CopiesIssued > 0 */

/*which book not used 
SELECT bookdirectory.BookTitle FROM bookdirectory,bookinventory WHERE 
bookdirectory.BookCode = bookinventory.BookCode AND bookinventory.CopiesIssued = 0 */

/*top 5/10 most books used
SELECT bookdirectory.BookTitle , bookinventory.CopiesIssued FROM bookdirectory,bookinventory WHERE 
bookdirectory.BookCode = bookinventory.BookCode ORDER BY bookinventory.CopiesIssued DESC LIMIT 5 */

/*top 5/10 least books used
SELECT bookdirectory.BookTitle , bookinventory.CopiesIssued FROM bookdirectory,bookinventory  WHERE 
bookdirectory.BookCode = bookinventory.BookCode ORDER BY bookinventory.CopiesIssued ASC LIMIT 5*/

/* Book title Author n bookcode where copies issued are > 3
SELECT DISTINCT BookTitle,Author,bookdirectory.BookCode FROM BookDirectory,bookinventory WHERE bookinventory.CopiesIssued > 3 AND bookdirectory.BookCode = bookinventory.BookCode ORDER BY BookCode ASC;*/

/* if number of copies available of book is less than 2
SELECT d.BookTitle FROM bookinventory b, bookdirectory d WHERE b.bookcode = d.bookcode AND b.copiesavailable<2;*/

/* CREATE instances */
INSERT INTO issuerecords VALUES('IB027','70362019015',1,'Not Returned','2021-04-12','2021-04-23',0,0) 
