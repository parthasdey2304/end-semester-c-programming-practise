### **JAVA AND EXCEL - QUESTION PAPER**  
**Total Marks: 50**  
**Time: 2 Hours**  

---

### **Section A** *(20 Marks)*  

#### **Part I: Multiple Choice Questions (10 × 1 = 10 Marks)**  

1. Who created Java and in which year?  
   a) Sun Microsystems, 1995  
   b) Oracle, 1991  
   c) Microsoft, 2000  
   d) Sun Microsystems, 1991  

2. What does JVM stand for?  
   a) Java Virtual Machine  
   b) Java Version Module  
   c) Java Value Manager  
   d) Java Virtual Manager  

3. What does the `public` keyword in Java mean?  
   a) Accessible to the package only  
   b) Accessible to the class only  
   c) Accessible to everyone  
   d) Not accessible  

4. Which Excel function is used to calculate the sum of a range of cells?  
   a) =AVERAGE()  
   b) =SUM()  
   c) =ADD()  
   d) =TOTAL()  

5. What does the `++` operator signify in Java?  
   a) Postfix Increment  
   b) Prefix Decrement  
   c) Both a and b  
   d) Prefix Increment  

6. What is the **legend** in an Excel chart?  
   a) Axis for data series  
   b) Title of the chart  
   c) Data labels for the categories  
   d) Key explaining chart symbols  

7. Which is a valid cell reference in Excel?  
   a) $A1$  
   b) A1  
   c) 1A  
   d) Row2  

8. What is the output of `System.out.print()` if the next line is skipped?  
   a) Adds a newline after text  
   b) Prints on the same line  
   c) Throws an error  
   d) None of the above  

9. If `a = 3, b = 4`, what is the output of `a += ++b;`?  
   a) 6  
   b) 7  
   c) 8  
   d) 9  

10. What does WORA stand for in Java?  
    a) Write Once, Run Always  
    b) Write Once, Run Anywhere  
    c) Write Once, Read Anywhere  
    d) None of the above  

---

#### **Part II: Code Analysis (10 Marks)**  

1. **Identify Code Components (5 × 1 = 5 Marks)**  
   Examine the following Java code snippet:  
   ```java
   public class FareCalculator {
       public static void main(String[] args) {
           int distance = 50;
           int fare;
           if (distance <= 10) {
               fare = 5 * distance;
           } else if (distance <= 30) {
               fare = 50 + (distance - 10) * 3;
           } else {
               fare = 110 + (distance - 30) * 2;
           }
           System.out.println("Total fare: " + fare);
       }
   }
   ```  
   Answer the following:  
   a) What will be the fare for a distance of 50?  
   b) What would happen if the first condition is removed?  
   c) What is the role of `else if` in this code?  
   d) Predict the output if `distance = 20`.  

2. **Correct the Code (5 × 1 = 5 Marks)**  
   Each code snippet below contains an error. Find and correct it.  

   a)  
   ```java
   public class Test {
       public static void main(String args) {
           System.out.println("Hello World");
       }
   }
   ```  

   b)  
   ```java
   public class Demo {
       public static void main(String[] args) {
           int num = 10
           System.out.println(num);
       }
   }
   ```  

   c)  
   ```java
   public class Calc {
       public static main(String[] args) {
           int a = 5, b = 10;
           System.out.println(a + b);
       }
   }
   ```  

   d)  
   ```java
   public class Error {
       public static void main(String[] args) {
           int x = 10;
           if (x => 10) {
               System.out.println("X is 10 or more");
           }
       }
   }
   ```  

   e)  
   ```java
   public class Print {
       public static void main(String[] args) {
           int a = 5;
           System.out.printl(a);
       }
   }
   ```  

---

#### **Section B** *(30 Marks)*  

**Answer any 3 out of 4 question sets. Each set is 10 marks (3 + 3 + 4).**  

---

**Set 1:** *(Odd Set)*  

1. **Theory Question (3 Marks)**  
   Explain the difference between `print()` and `println()` in Java.  

2. **Prefix-Postfix Math Question (3 Marks)**  
   Calculate the result of the following:  
   ```java
   int a = 8, b = 4;
   int result = ++a + b-- - --b + a--;
   ```  

3. **Java Program (4 Marks)**  
   Write a program to calculate the grade of a student based on the following marks chart:  
   - Marks >= 90: A  
   - Marks >= 80 and < 90: B  
   - Marks >= 70 and < 80: C  
   - Marks >= 60 and < 70: D  
   - Marks < 60: F  

---

**Set 2:** *(Even Set)*  

1. **Excel Charts (3 Marks)**  
   Define the difference between a **bar chart** and a **column chart** in Excel.  

2. **Math Logic in Java (3 Marks)**  
   Write a Java program to calculate the total electricity bill based on the units consumed, as per the chart below:  
   - Units <= 100: ₹5 per unit  
   - Units > 100 and <= 300: ₹500 + ₹7 per unit for units above 100  
   - Units > 300: ₹1900 + ₹10 per unit for units above 300  

3. **Theory Question (4 Marks)**  
   Explain the OOPS concept of **Encapsulation** with an example.  

---

**Set 3:** *(Odd Set)*  

1. **Java Theory (3 Marks)**  
   What is the **Java Compiler and Interpreter Architecture**, and how does it implement the WORA principle?  

2. **Prefix-Postfix Math Question (3 Marks)**  
   Evaluate the following:  
   ```java
   int x = 15, y = 6;
   x = x++ - --y + y-- + --x;
   ```  

3. **Java Program (4 Marks)**  
   Write a program in Java to calculate the bus fare based on the distance traveled, using the following fare chart:  
   - Distance <= 5 km: ₹10 per km  
   - Distance > 5 and <= 20 km: ₹50 + ₹8 per km for distance above 5 km  
   - Distance > 20 km: ₹170 + ₹5 per km for distance above 20 km  

---

**Set 4:** *(Even Set)*  

1. **Excel Components (3 Marks)**  
   Explain any three components of an Excel chart.  

2. **Math Logic in Java (3 Marks)**  
   Write a Java program to calculate the gross salary of an employee based on the following:  
   - Base salary: ₹20,000  
   - PF: 12% of base salary  
   - HRA: 15% of base salary  
   - Bonus: ₹5,000  
   - Tax: 10% of gross salary after adding HRA and Bonus  

3. **Theory Question (4 Marks)**  
   Describe the **operator precedence** in Java using the BEDMAS rule.  

--- 

**End of Question Paper**
