# Solutions

## HTML && CSS

1. **State the meaning and write a pseudo like `<b>` tag.**
   - `<b>` is used to make the text bold. Example pseudo-like usage:
     ``` html
     <b>This is bold text</b>
     ```
     

2. **Are HTML tags case sensitive or not?**
   - HTML tags are not case-sensitive. `<DIV>` is the same as `<div>`.

3. **Write down different tags used to create a table in HTML.**
   - The table-related tags are:
     - `<table>`: Defines a table.
     - `<tr>`: Defines a table row.
     - `<td>`: Defines a table cell.
     - `<th>`: Defines a header cell.
     - `<caption>`: Adds a title to the table.

4. **What is HREF?**
   - HREF stands for "Hypertext Reference." It specifies the URL of the page the link goes to.

5. **Explain different elements used to create a form in HTML.**
   - `<form>`: Defines the form.
   - `<input>`: Allows user input (text, email, password, etc.).
   - `<label>`: Adds labels to form elements.
   - `<textarea>`: Adds a multi-line input field.
   - `<button>`: Adds a button (submit, reset, etc.).
   - `<select>`: Creates a drop-down menu.
   - `<fieldset>`: Groups related elements.

6. **State the meaning and write a pseudo-class in CSS: `:visited` etc.**
   - `:visited`: Applies styles to links that have been visited by the user.
     ``` css
     a:visited {
         color: purple;
     }
     ```
     

7. **Differentiate Embedded CSS and Inline CSS.**
   - Embedded CSS: CSS rules are added within a `<style>` tag in the `<head>` of the HTML document.
     ``` html
     <style>
         p {
             color: blue;
         }
     </style>
     ```
     
   - Inline CSS: CSS is applied directly to an element using the `style` attribute.
     ``` html
     <p style="color: blue;">This is a paragraph.</p>
     ```
     

8. **What is `<img src>`?**
   - `<img src>` is used to display an image in HTML. The `src` attribute specifies the path to the image file.
     ``` html
     <img src="image.jpg" alt="Example Image">
     ```
     

9. **Explain the significance of the anchor tag.**
   - The `<a>` tag is used to create hyperlinks, allowing users to navigate to other pages or resources.
     ``` html
     <a href="https://example.com">Visit Example</a>
     ```
     

10. **Rowspan attribute is useful with which tag in HTML?**
    - The `rowspan` attribute is used with the `<td>` or `<th>` tag to span a cell across multiple rows.
      ``` html
      <table>
          <tr>
              <td rowspan="2">Rowspan Example</td>
              <td>Cell 1</td>
          </tr>
          <tr>
              <td>Cell 2</td>
          </tr>
      </table>
      ```
      

11. **Create an HTML webpage for pizza delivery.**
    ``` html
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <title>Pizza Delivery</title>
    </head>
    <body>
        <h1>Welcome to Pizza Delivery</h1>
        <form action="order.php" method="post">
            <label for="name">Name:</label>
            <input type="text" id="name" name="name" required><br><br>
            <label for="address">Address:</label>
            <textarea id="address" name="address" required></textarea><br><br>
            <label for="pizza">Choose Pizza:</label>
            <select id="pizza" name="pizza">
                <option value="margherita">Margherita</option>
                <option value="pepperoni">Pepperoni</option>
                <option value="veggie">Veggie</option>
            </select><br><br>
            <button type="submit">Order Now</button>
        </form>
    </body>
    </html>
    ```
    

12. **Show a list of popular visiting places in West Bengal using HTML. There must be a nested list.**
    ``` html
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <title>Visiting Places in West Bengal</title>
    </head>
    <body>
        <h1>Popular Visiting Places in West Bengal</h1>
        <ul>
            <li>Kolkata
                <ul>
                    <li>Victoria Memorial</li>
                    <li>Howrah Bridge</li>
                </ul>
            </li>
            <li>Darjeeling
                <ul>
                    <li>Himalayan Railway</li>
                    <li>Tiger Hill</li>
                </ul>
            </li>
            <li>Sundarbans
                <ul>
                    <li>National Park</li>
                    <li>Wildlife Sanctuary</li>
                </ul>
            </li>
        </ul>
    </body>
    </html>
    ```
    

13. **Differentiate between attribute selector and class selector in CSS with an example.**
    - Attribute Selector: Targets elements based on their attributes.
      ``` css
      input[type="text"] {
          border: 1px solid black;
      }
      ```
    - Class Selector: Targets elements based on their `class` attribute.
      ``` css
      .example {
          color: red;
      }
      ```
      

14. **Distinguish and differentiate between internal and external CSS with examples.**
    - Internal CSS: CSS rules are written within a `<style>` tag in the `<head>` section of the HTML file.
      ``` html
      <style>
          body {
              font-family: Arial;
          }
      </style>
      ```
    - External CSS: CSS rules are placed in a separate `.css` file and linked to the HTML file using the `<link>` tag.
      ``` html
      <link rel="stylesheet" href="styles.css">
      ```
      

15. **Explain the types of selectors available in CSS.**
    - Universal Selector (`*`): Selects all elements.
    - Type Selector: Selects elements by their tag name.
    - Class Selector: Selects elements by their class.
    - ID Selector: Selects elements by their ID.
    - Attribute Selector: Selects elements based on their attributes.
    - Pseudo-classes: Selects elements based on their state (e.g., `:hover`).
    - Pseudo-elements: Selects and styles parts of elements (e.g., `::before`).

## CSS

16. **Creation of form in an HTML page to take input using a form tag. There should be a submit button also.**
    ``` html
    <!DOCTYPE html>
    <html>
    <head>
        <title>Form Example</title>
    </head>
    <body>
        <h1>User Form</h1>
        <form action="submit.php" method="post">
            <label for="username">Username:</label>
            <input type="text" id="username" name="username" required><br><br>
            <label for="email">Email:</label>
            <input type="email" id="email" name="email" required><br><br>
            <button type="submit">Submit</button>
        </form>
    </body>
    </html>
    ```
    

17. **Create an HTML page to show the list of all theory, practical & sessional papers of BCA 3rd semester.**
    ``` html
    <!DOCTYPE html>
    <html>
    <head>
        <title>BCA 3rd Semester Papers</title>
    </head>
    <body>
        <h1>BCA 3rd Semester Papers</h1>
        <h2>Theory Papers</h2>
        <ul>
            <li>Data Structures</li>
            <li>Operating Systems</li>
            <li>Software Engineering</li>
        </ul>
        <h2>Practical Papers</h2>
        <ul>
            <li>Data Structures Lab</li>
            <li>Operating Systems Lab</li>
        </ul>
        <h2>Sessional Papers</h2>
        <ul>
            <li>Seminar</li>
            <li>Project Work</li>
        </ul>
    </body>
    </html>
    ```
    

18. **Write an HTML program to create a table using rowspan and colspan.**
      ``` html
      <!DOCTYPE html>
      <html>
      <head>
         <title>Table Example</title>
      </head>
      <body>
         <table border="1">
            <tr>
                  <th rowspan="2">Name</th>
                  <th colspan="3">Marks</th>
            </tr>
            <tr>
                  <td>X</td>
                  <td>Y</td>
                  <td>Z</td>
            </tr>
            <tr>
                  <td>John</td>
                  <td>85</td>
                  <td>90</td>
                  <td>88</td>
            </tr>
            <tr>
                  <td>Jane</td>
                  <td>88</td>
                  <td>95</td>
                  <td>92</td>
            </tr>
         </table>
      </body>
      </html>
      ```


19. **Write an HTML code to create a table having fields like name, student ID, marks. The marks field will be further divided into three parts like x, y, z language.**
      ``` html
      <!DOCTYPE html>
      <html>
      <head>
         <title>Student Marks Table</title>
      </head>
      <body>
         <table border="1">
            <tr>
                  <th>Name</th>
                  <th>Student ID</th>
                  <th colspan="3">Marks</th>
            </tr>
            <tr>
                  <td>John</td>
                  <td>101</td>
                  <td>X</td>
                  <td>Y</td>
                  <td>Z</td>
            </tr>
            <tr>
                  <td>Jane</td>
                  <td>102</td>
                  <td>X</td>
                  <td>Y</td>
                  <td>Z</td>
            </tr>
         </table>
      </body>
      </html>
      ```


20. **Create a checkbox, drop-down list, etc., in an HTML page.**
      ``` html
      <!DOCTYPE html>
      <html>
      <head>
         <title>Form with Checkbox and Dropdown</title>
      </head>
      <body>
         <h1>Form Example</h1>
         <form>
            <label for="subscribe">Subscribe to newsletter:</label>
            <input type="checkbox" id="subscribe" name="subscribe"><br><br>
            
            <label for="options">Choose an option:</label>
            <select id="options" name="options">
                  <option value="option1">Option 1</option>
                  <option value="option2">Option 2</option>
                  <option value="option3">Option 3</option>
            </select><br><br>
            
            <button type="submit">Submit</button>
         </form>
      </body>
      </html>
      ```


21. **What is the purpose of the `<html>` tag?**
   - The `<html>` tag is the root element of an HTML page and it encapsulates all the content on the page.

22. **How do you create a hyperlink in HTML?**
   - A hyperlink is created using the `<a>` tag with the `href` attribute specifying the URL.
     
     <a href="https://example.com">Visit Example</a>
     

23. **Write an HTML tag to insert an image.**
   - The `<img>` tag is used to insert an image.
     ``` html
     <img src="image.jpg" alt="Description of image">
     ```
     

24. **What is the difference between the `<div>` and `<span>` tags?**
   - `<div>` is a block-level element used for grouping larger sections of content, while `<span>` is an inline element used for styling small portions of text.

25. **How do you create an unordered list in HTML?**
   - An unordered list is created using the `<ul>` tag, with list items defined by the `<li>` tag.
     ``` html
     <ul>
         <li>Item 1</li>
         <li>Item 2</li>
     </ul>
     ```
     

26. **What is the use of the alt attribute in the `<img>` tag?**
   - The `alt` attribute provides alternative text for an image if it cannot be displayed, improving accessibility and SEO.

27. **Write an HTML code to create a table with 2 rows and 3 columns.**
      ``` html
      <!DOCTYPE html>
      <html>
      <head>
         <title>Simple Table</title>
      </head>
      <body>
         <table border="1">
            <tr>
                  <td>Row 1, Cell 1</td>
                  <td>Row 1, Cell 2</td>
                  <td>Row 1, Cell 3</td>
            </tr>
            <tr>
                  <td>Row 2, Cell 1</td>
                  <td>Row 2, Cell 2</td>
                  <td>Row 2, Cell 3</td>
            </tr>
         </table>
      </body>
      </html>
      ```


28. **What tag is used to make text bold in HTML?**
   - The `<b>` tag is used to make text bold.
     ``` html
     <b>This text is bold</b>
     ```
     

29. **What is the purpose of the `<meta>` tag in HTML?**
   - The `<meta>` tag provides metadata about the HTML document, such as character set, author, and viewport settings.

30. **How do you add a video to a web page using HTML?**
   - A video can be added using the `<video>` tag with the `src` attribute specifying the video file.
     ``` html
     <video controls>
         <source src="video.mp4" type="video/mp4">
         Your browser does not support the video tag.
     </video>
     ```
     

31. **How can you include CSS in an HTML file? List three methods.**
   - CSS can be included in an HTML file using:
     1. Inline CSS: Using the `style` attribute in HTML elements.
     2. Internal CSS: Using a `<style>` tag within the `<head>` section.
     3. External CSS: Linking to a separate CSS file using the `<link>` tag. 

32. **Write a CSS rule to make all paragraphs red in color.**
   - The CSS rule above sets the text color of all paragraphs to red.
      ``` html
      <style>
         p {
            color: red;
         }
      </style>
      ```

33. **What is the difference between id and class in CSS?**
   - An `id` is unique to a single element and is defined with a `#`, while a `class` can be used on multiple elements and is defined with a `.`.

34. **How do you apply a background image to a web page?**
   - A background image can be applied using CSS with the `background-image` property, for example:
     ``` css
     body {
         background-image: url('background.jpg');
     }
     ```
     

35. **Differentiate between Embedded CSS and Inline CSS.**
   - Embedded CSS is defined within a `<style>` tag in the `<head>` section and applies to multiple elements, while Inline CSS is applied directly to an HTML element using the `style` attribute and affects only that specific element.

36. **Explain the types of selectors available in CSS.**
   - CSS selectors include:
     1. Type selectors (e.g., `div`, `p`)
     2. Class selectors (e.g., `.classname`)
     3. ID selectors (e.g., `#idname`)
     4. Attribute selectors (e.g., `[type="text"]`)
     5. Pseudo-class selectors (e.g., `:hover`)
     6. Pseudo-element selectors (e.g., `::before`)


## JavaScript
37. **Describe the advantages of global variables and local variables in JavaScript.**
   - Global variables can be accessed from any function, making them useful for sharing data across functions. Local variables, on the other hand, help in encapsulating data and preventing conflicts, as they are only accessible within the function they are defined in.

38. **What are the types of loops present in JavaScript?**
   - The types of loops in JavaScript include:
     1. `for` loop
     2. `while` loop
     3. `do...while` loop
     4. `for...in` loop
     5. `for...of` loop

39. **Write a JavaScript program to reverse an array of integers, strings, integers.**
   ``` javascript
   function reverseArray(arr) {
       return arr.reverse();
   }
   ```

40. **Write a JavaScript program to test whether a year is a leap year or not.**
   ``` javascript
   function isLeapYear(year) {
       return (year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0);
   }
   ```

41. **Write a JavaScript program to check if a number is perfect or not.**
   ``` javascript
   function isPerfectNumber(num) {
       let sum = 0;
       for (let i = 1; i < num; i++) {
           if (num % i === 0) {
               sum += i;
           }
       }
       return sum === num;
   }
   ```

42. **Write a JavaScript program to validate a mobile phone number.**
   ``` javascript
   function validateMobileNumber(number) {
       const regex = /^[0-9]{10}$/;
       return regex.test(number);
   }
   ```

43. **Write a JavaScript program to validate an Indian postal code.**
   function validatePostalCode(code) {
       const regex = /^[1-9][0-9]{5}$/;
       return regex.test(code);
   }

44. **What is the function Constructor in JavaScript? Give an example.**
   - A function constructor is a special type of function used to create objects. Example:
   ``` javascript
   function Person(name, age) {
       this.name = name;
       this.age = age;
   }
   ```

45. **Describe the jobs of concat(), indexOf(), unShift(), slice() methods in JavaScript.**
   - `concat()`: Combines two or more arrays.
   - `indexOf()`: Returns the first index at which a given element can be found in the array.
   - `unShift()`: Adds one or more elements to the beginning of an array.
   - `slice()`: Returns a shallow copy of a portion of an array into a new array.

46. **Define function overloading with a code snippet.**
   - JavaScript does not support function overloading in the traditional sense, but you can achieve similar behavior using default parameters or checking the number of arguments.
   ``` javascript
   function add(a, b) {
       if (b === undefined) {
           return a + a; // Overloaded behavior
       }
       return a + b;
   }
   ```

47. **What is the significance of the keyword arguments in JavaScript?**
   - The `arguments` object is an array-like object available within functions that contains the values of the arguments passed to the function.

48. **Validate a password field in JavaScript that must have at least 1 uppercase letter, 1 lowercase letter, and 1 number.**
   ``` javascript
   function validatePassword(password) {
       const regex = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d).+$/;
       return regex.test(password);
   }
   ```

49. **What is an object?**
   - An object is a collection of key-value pairs where keys are strings (or Symbols) and values can be of any data type.

50. **What is the constructor function in JavaScript?**
   - A constructor function is a function used to create objects. It is called with the `new` keyword.

51. **Create a constructor function using the this keyword.**
   ``` javascript
   function Car(make, model) {
       this.make = make;
       this.model = model;
   }
   ```

52. **What is the difference between let, var, and const?**
   - `var`: Function-scoped or globally-scoped, can be re-declared and updated.
   - `let`: Block-scoped, can be updated but not re-declared in the same scope.
   - `const`: Block-scoped, cannot be updated or re-declared.

53. **Write the syntax to create an if-else condition in JavaScript.**
   ``` javascript
   if (condition) {
       // code to execute if condition is true
   } else {
       // code to execute if condition is false
   }
   ```

54. **What does the typeof operator do in JavaScript?**
   - The `typeof` operator returns a string indicating the type of the unevaluated operand.

55. **How can you write a loop in JavaScript that prints numbers from 1 to 5?**
   ``` javascript
   for (let i = 1; i <= 5; i++) {
       console.log(i);
   }
   ```

56. **What is the difference between == and ===?**
   - `==` checks for equality of value with type coercion, while `===` checks for equality of both value and type without type coercion.

57. **How do you add an event listener to a button using JavaScript?**
   ``` javascript
   const button = document.getElementById('myButton');
   button.addEventListener('click', function() {
       // code to execute on button click
   });
   ```
58. **What are the differences between the shift() and join() methods in JavaScript?**
   - `shift()`: Removes the first element from an array and returns that element.
   - `join()`: Joins all elements of an array into a string.

59. **Why do we use jQuery in web pages? Give an example.**
   - jQuery is used to simplify HTML document traversing, event handling, and animation. Example:
   ``` javascript
   $(document).ready(function() {
       $('#myButton').click(function() {
           alert('Button clicked!');
       });
   });
   ```

## jQuery

60. **Describe the job of the Ready() function in jQuery.**
   - The `$(document).ready()` function is used to execute code when the DOM is fully loaded, ensuring that all elements are available for manipulation.

61. **What is the job of the toggle() function in jQuery?**
   - The `toggle()` function is used to show or hide an element with a sliding motion, toggling its visibility each time it is called.

62. **Explain the significance of using jQuery in web pages.**
   - jQuery simplifies HTML document manipulation, event handling, and animation, making it easier to develop interactive web applications with less code.

63. **Describe the basic structure of jQuery with sample code.**
   ```javascript
   $(document).ready(function() {
       // jQuery code goes here
   });
   ```

64. **Write a jQuery code to hide all <p> elements when a button is clicked.**
   ```javascript
   $('#hideButton').click(function() {
       $('p').hide();
   });
   ```

65. **What is the syntax for selecting an element by id in jQuery?**
   - The syntax for selecting an element by id in jQuery is `$('#elementId')`.

66. **What is the purpose of the .fadeIn() and .fadeOut() methods?**
   - The `.fadeIn()` method gradually changes the opacity of an element to make it visible, while the `.fadeOut()` method gradually changes the opacity to make it invisible.

67. **Write jQuery code to toggle the visibility of a div when a button is clicked.**
   ```javascript
   $('#toggleButton').click(function() {
       $('#myDiv').toggle();
   });
   ```

68. **How do you animate an element using jQuery?**
   ``` javascript
   $('#animateButton').click(function() {
       $('#myElement').animate({ left: '250px' }, 1000);
   });
 
69. **What are the usefulness of AJAX in web pages?**
   - AJAX allows web pages to be updated asynchronously by exchanging data with a web server behind the scenes. This means that it can load new data without refreshing the entire page, leading to a smoother user experience.

70. **Explain the framework of AJAX with a neat diagram.**
   - AJAX framework typically involves the following components:
     1. Client-side script (JavaScript)
     2. XMLHttpRequest object
     3. Server-side script (e.g., PHP, Node.js)
     4. Response data (JSON, XML, HTML)

71. **What is an Active web page?**
   - An Active web page is a dynamic web page that can change its content and appearance based on user interactions or other factors, often using technologies like AJAX, JavaScript, or server-side scripting.

72. **What are the functions of a browser?**
   - A browser's functions include:
     1. Retrieving and displaying web pages.
     2. Interpreting HTML, CSS, and JavaScript.
     3. Managing user sessions and cookies.
     4. Providing navigation tools (back, forward, refresh).
     5. Supporting extensions and plugins for additional functionality.
