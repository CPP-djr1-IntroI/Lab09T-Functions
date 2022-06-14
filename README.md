## Intro to C++ I Lab 09

Functions

**Goals:**

1.  Use functions

2.  Write and test one function at a time

3.  Functions calling other functions


**Lab 9.1**

Let's look at how this program is to work:

<ul>Run #1</ul>

<pre>
******************
Fun With Fractions
******************
Enter Numerator: 2
Enter Denominator: 4

Original Fraction: 2 / 4

Support Functions:
minimum (16, 4): 4
gcd (16, 12): 4

Reduced Fraction: 1 / 2
</pre>

<ul>Run #2</ul>

<pre>
******************
Fun With Fractions
******************

Enter Numerator: -1
Enter Numerator: 8
Enter Denominator: 0
Enter Denominator: -1
Enter Denominator: 24

Original Fraction: 8 / 24

Support Functions:
minimum (16, 4): 4
gcd (16, 12): 4

Reduced Fraction: 1 / 3
</pre>

1.  TODO#1: Implement **printAsterisks** which accepts the number of
    asterisks to print and prints that many asterisks on the screen.

2.  TODO#2: Implement **printHeading** so that printHeading outputs the
    three lines shown in screen shots 2. Output a line of asterisks
    above and below the title. The length of the line of asterisks is to
    be the same as the length of the string. Uncomment the line
    printHeading (HEADING_NAME); and test.

3.  TODO#3: Implement **getPositiveInt** such that the function outputs
    the prompt passed in to the function and gets an integer >= 0 from
    the user. Validate the input with a do/while loop. Uncomment the
    lines of code in main that use the function getPositiveInt. Also,
    you will need to change <b>return 0;</b> to return the number
    entered by the user.

4.  TODO#4: Implement **printFraction**. Uncomment the code in main and
    test.

5.  TODO#5: Implement the function **minimum** which takes two integers
    and returns the smallest value of the two values passed in. Again,
    replace <b>return 0;</b>

6.  TODO#6: Implement **greatestCommonDivisor**. ___This function needs to
    make a call to the function minimum.___ If the values 6 and 8 are
    passed to this function, the value 2 will be returned because 2 is
    the largest number that evenly divides both 6 and 8. Notice that
    there is no reason to check the divisors 7 and 8 since both of these
    numbers are larger than 6. Last time to replace <b>return 0;</b>

7.  TODO#7: Implement **printFractionReduced**. ___This function will need
    to make a call to greatestCommonDivisor.___ Once you have
    completed implementing this function, uncomment the code in main. If
    your code is correct, you will be able to duplicate the above screen
    shots.
    
**To complete this assignment you must submit the following:**

1.  **An electronic Solution of your program on GitHub**

    a.  You are to click on the Lab09 Link on The C++ Tutorials in the section Data Input to accept this
        assignment as we've done before. Once accepted, code up a
        complete solution to each project specified above. Your
        complete solution is to be pushed to GitHub no later than the
        date and time specified above for your specific section. I will
        only grade your solution from the proper location on GitHub.

    b.  Pay attention to the example output above. Your program's output
        must look **exactly** like the example output! The spacing and
        newlines in your output must match exactly.

    c.  Make sure that your program compiles and runs correctly with no
        errors and no warnings. If you get any errors, double check that
        you typed everything correctly. Be aware that C++ is
        case-sensitive.

2.  **An electronic pdf (punetidLab09Functions.pdf) 
of your program is to be emailed to ryandj@pacificu.edu**
