[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Ay551EX-)
# CS1 Final Project - [Phone Number Contact System]

## 1. Overview
- What problem does your project solve?  
- Briefly describe the purpose and key features of your program.  

     One main problem that my code helps solve is allowing anyone using the code to find a desired contact fairly easily.
     My code is basically a contact book with a few seraching features that allows you to filter out either by family or by friends
etc.


## 2. Design Decisions
- What fundamental programming constructs and data types did you use, and why?

     For my code I used a few strings for basic names, phone numbers, since they allow the user to filter lettering easily. And I used char for the Yes/No(Y/N) and bool and found to keep everything nice and simple.
 
- Why did you choose to structure your data using structs?

     I used structs because it let me use "Contact" as a anchor for the arrays that are connected to the names, numbers, and categories/relationships.

How did you implement searching and sorting? What algorithms did you use and why?

   For searching I used Linear Search, since I had a small amount of contacts it semmed like the simplest and fastest way to get the search results that the user wants. And for sorting I didnt use anything, but something I could have dont is maybe used bubble sort to sort all the contacts in alphibetacal order.

- How do you ensure data persistence between program runs?

     I sorted everything in an array and I would need to change this by adding a fsteam in order to implement a .txt file for instance. 

- Did you consider alternative approaches? If so, why did you not use them?  

     When it came to choosing classes or structs I ended up choosing structs because I didnt need private/public data. And keep things nice and simple. I also used Arrays since I needed to use specific number of contacts. And now I realize that I would have used switches for the category search feature to possibly make my code cleaner.

## 3. Testing Summary
- **Structured Testing Log:** Include a table with test cases, expected output, actual output, and pass/fail status.

 | Test Case | Input 1(Letter),2(Family) |  Expected Outcome  | Acutal Output  |  Stat
 | Valid Fam |            D              |   David Johnson    | David Johnson  | Pass
 | Not Family|            L              | Linda Martinez,etc |Linda Martinez  | Pass
 | No Match  |            Z              | No Matches found   |No Matches Found| Pass
 |Invalid Op.|            C, X           |     Error!!!       | No Con. Match  | Pass

 
- What testing methods did you use?

- The Testing methods that I used were: Valid Family, Not Family Related, No Matches Found, and Invalid Option.

- Provide examples of test inputs (valid and invalid) and describe how your program responds.  

- Some examples of valid/invalid test imputs are the use of Letters to see if there are any applicable names with this letter, and if there is you will get one of the following options: Matching Contacts, Family relation/not related, and No contacts in the system match the search. 

## 4. Technical Walkthrough
- Explain the main functionality of your program.  
- **Include a link to your required video demonstration** showcasing how the project works (**3-7 minutes**). 
    Make sure it shareable without approval needed.
  
This is my code before I noticed we cannot use vectors. But it basically does the same thing my code does at the moment.
LINK: (https://youtu.be/3XLM2KQsDPA)


## 5. Challenges and Lessons Learned
- What challenges did you encounter while working on this project?

     Some challenges that I had to go through is that I was lost in the begining and didnt really know how to start my code. Another challenge is that my personal computer ended up not working properly and was an obsticle for me to continue my code since I couldnt log in onto my account and work on my project.  

- What key lessons did you learn about programming and problem-solving?  

     A key lesson I learned is that when I code I need to be as specific as possible and if I have a sister, and sister-in-law the program could confuse the two and it could cause problems and give us the wrong outcome. I also spent quite a bit of time figuring out if I should use a database that was more modern or just keep it simple and ended up deciding on keeping it simple and user friendly. And at first I had 'checkIfFam' inside of 'main' and realized that it would be much better if I put it before main just to make it look cleaner.

## 6. Future Improvements
- If you had more time, what changes or enhancements would you make?

     If I had more time I would add more filtering systems like by friends, medical doctors, mechanics etc. And overall I would have added more people in the contact list so there could have been a more diverse catalogue.
