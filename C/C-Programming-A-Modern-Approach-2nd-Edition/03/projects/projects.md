## Project 3.01

Write a program that accepts a date from the user in the form mm/dd/yyy and then displays it in the form yyymmdd:

Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217

## Project 3.02

Write a program that formats product information entered by the user. A session with the program should look like this:

Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item            Unit            Purchase
                Price           Date
583             $  13.50        10/24/2010
The item number and date should be left justified; the unit price should be right justified. Allow dollar amounts up to $9999.99. Hint Use tabs to line up the columns.

## Project 3.03

Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3. (Older ISBNs use 10 digits.) The first group (the GSI prefix) is currently either 978 or 979. The group identifier specifies the language or country of origin (for example, 0 and 1 are used in English-speaking countries). The publisher code identifies the publisher (393 is the code for W. W. Norton). The item number is assigned by the publisher to identify a specific book (97950 is the code for this book). An ISBN ends with a check digit that's used to verify the accuracy of the preceding digits. Write a program that breas down an ISBN entered by the user:

Enter ISBN: 978-0-393-97950-3
GSI prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3
Note: The number of digits in each group may very: you can't assume that groups have the lengths shown in this example. Test your program with actual ISBN values (usually found on the back cover of a book and on the copyright page).
