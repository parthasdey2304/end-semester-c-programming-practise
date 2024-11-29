### **JAVA AND EXCEL - QUESTION PAPER**  
**Total Marks: 50**  
**Time: 2 Hours**  

---

### **Section A** *(20 Marks)*  

#### **Part I: Multiple Choice Questions (10 × 1 = 10 Marks)**  

1. **Theory Question**:  
   Who acquired Sun Microsystems (the original creator of Java), and in which year?  
   a) Microsoft, 2009  
   b) Oracle, 2010  
   c) IBM, 2009  
   d) Apple, 2011  

2. **Increment-Decrement Calculation**:  
   If `a = 5, b = 10, c = 3;` what is the result of:  
   ```java
   a += b - ++c + a--;
   ```  
   a) 15  
   b) 18  
   c) 12  
   d) 10  

3. **Excel Formula**:  
   Which of the following is the correct formula to calculate the average of cells A1 to A10 in Excel?  
   a) =AVERAGE(A1:A10)  
   b) =AVG(A1:A10)  
   c) =SUM(A1:A10)/10  
   d) Both a and c  

4. **Assertion-Reasoning Question**:  
   Assertion (A): A chart in MS Excel is automatically saved when you save a worksheet.  
   Reason (R): There is no need to save the chart separately.  
   a) Both Assertion (A) and Reason (R) are true, and Reason (R) is a correct explanation of Assertion (A).  
   b) Both Assertion (A) and Reason (R) are true, but Reason (R) is not a correct explanation of Assertion (A).  
   c) Assertion (A) is true, and Reason (R) is false.  
   d) Assertion (A) is false, and Reason (R) is true.  

5. What is the role of the **JVM** in the Java architecture?  
   a) Converts Java code to machine code directly  
   b) Converts bytecode to machine code  
   c) Both a and b  
   d) None of the above  

6. **Excel Function**:  
   Which function will return the number of non-empty cells in a range?  
   a) =COUNTIF()  
   b) =COUNTA()  
   c) =COUNT()  
   d) =SUMIF()  

7. What is the output of the following Java code?  
   ```java
   int x = 10, y = 5;
   int z = ++x - --y + y++ + x--;
   System.out.println(z);
   ```  
   a) 20  
   b) 19  
   c) 21  
   d) 18  

8. Which is NOT a valid cell reference in Excel?  
   a) $A$1  
   b) A1:B1  
   c) 1A  
   d) None of the above  

9. **Java Operator Precedence**:  
   What is the result of the following?  
   ```java
   int a = 5 * 3 + 8 / 4 - 2;
   ```  
   a) 15  
   b) 17  
   c) 13  
   d) 14  

10. In Excel, what does the **legend** represent in a chart?  
    a) Describes the data series  
    b) Axis labels  
    c) Chart title  
    d) Plot area  

---

#### **Part II: Code Analysis and Correction (10 Marks)**  

1. **Identify Code Components (5 × 1 = 5 Marks)**  
   Examine the following code snippet:  
   ```java
   public class SalaryCalculator {
       public static void main(String[] args) {
           int baseSalary = 20000;
           int hra = (int)(baseSalary * 0.15);
           int pf = (int)(baseSalary * 0.12);
           int bonus = 5000;
           int grossSalary = baseSalary + hra + bonus - pf;
           System.out.println("Gross Salary: " + grossSalary);
       }
   }
   ```  
   Answer the following:  
   a) What is the output of the program?  
   b) What is the role of `(int)` in this code?  
   c) What will happen if `pf` is calculated as `baseSalary * 0.10` instead?  
   d) If `baseSalary` is changed to 30000, what would be the new gross salary?  

2. **Correct the Code (5 × 1 = 5 Marks)**  
   Identify and correct the errors in the following code snippets:  

   a)  
   ```java
   public class Main {
       public static void main(String[] args) {
           int x = 5;
           if x > 2 {
               System.out.println("X is greater than 2");
           }
       }
   }
   ```  

   b)  
   ```java
   public class Demo {
       public static void main(String[] args) {
           System.out.println("Result: " + 10 / 0);
       }
   }
   ```  

   c)  
   ```java
   public class Output {
       public static void main(String[] args) {
           int a = 10;
           System.out.printl(a);
       }
   }
   ```  

   d)  
   ```java
   public class Test {
       public static void main(String[] args) {
           int a = 10, b = 20;
           if (a == b);
               System.out.println("Equal");
       }
   }
   ```  

   e)  
   ```java
   public class Calc {
       public static void main(String[] args) {
           int result = 10 + 20 -;
           System.out.println("Result: " + result);
       }
   }
   ```  

---

### **Section B** *(30 Marks)*  

**Answer any 3 out of 4 question sets. Each set is 10 marks (3 + 3 + 4).**  

---

**Set 1:** *(Odd Set)*  

1. **Theory Question (3 Marks)**  
   Explain **polymorphism** with an example in Java.  

2. **Increment-Decrement Calculation (3 Marks)**  
   ```java
   int a = 7, b = 5, c = 3;
   int result = a++ + b-- - --c + c++;
   ```  
   Calculate the result.  

3. **Java Program (4 Marks)**  
   Write a program to calculate the bus fare based on the following chart:  
   - Distance <= 10 km: ₹8 per km  
   - Distance > 10 km: ₹80 + ₹6 per km for distance above 10 km  

---

**Set 2:** *(Even Set)*  

1. **Excel Theory (3 Marks)**  
   Explain the purpose of **cell range** and give an example of its usage in Excel.  

2. **Java Math Logic (3 Marks)**  
   Write a program to calculate the electricity bill based on the following:  
   - Units <= 50: ₹3 per unit  
   - Units > 50 and <= 150: ₹150 + ₹5 per unit for units above 50  
   - Units > 150: ₹650 + ₹8 per unit for units above 150  

3. **Theory Question (4 Marks)**  
   Describe **Encapsulation** and its importance in Java with an example.  

---

**Set 3:** *(Odd Set)*  

1. **Theory Question (3 Marks)**  
   Explain the role of the **JVM** in the execution of Java programs.  

2. **Increment-Decrement Calculation (3 Marks)**  
   ```java
   int x = 10, y = 6;
   int result = ++x + --y - x-- + y++;
   ```  
   Calculate the result.  

3. **Java Program (4 Marks)**  
   Write a program to calculate the final salary of an employee, given the following:  
   - Base Salary = ₹25,000  
   - HRA = 10% of Base Salary  
   - PF = 8% of Base Salary  
   - Bonus = ₹5,000  
   - Tax = 5% of Gross Salary  

---

**Set 4:** *(Even Set)*  

1. **Excel Charts (3 Marks)**  
   Describe the difference between a **pie chart** and a **donut chart** in Excel.  

2. **Java Math Logic (3 Marks)**  
   Write a program to calculate the grade of a student based on marks using the following chart:  
   - Marks >= 90: Grade A  
   - Marks >= 80 and < 90: Grade B  
   - Marks >= 70 and < 80: Grade C  
   - Marks >= 60 and < 70: Grade D  
   - Marks < 60: Grade F  

3. **Theory Question (4 Marks)**  
   Explain the **operator precedence** in Java with an example.  

--- 

**End of Question Paper**
