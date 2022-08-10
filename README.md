# Text-Adventure-Game
This is a text adventure game I built using C++ in Visual Studio Code.

# Reflection

## Introduction/Purpose:
I utilized a text editor called Visual Studio Code to build a text adventure game using the programming language C++. This allowed me to display text, take in commands, change directions, begin the game going any direction, and allow the game to be continuously played after winning or losing. Moreover, I wrapped the game in an infinite loop so that once the player wins or loses, they would go back to the beginning of the game. I learned how to properly use cout, cin, if statements, while loops, switches, and functions.  

## Problems I ran into:
The first problem I ran into was determining how to change directions after selecting a specific route such as if I begin the game going North, how would I be able to go East, West, or even go back North after going East or West. I solved this problem by creating if statements and nesting multiple different if statements within it. The next problem I experienced was that I couldn’t make the game repeat. I noticed that I would be able to bring the welcome area of the game back up (since I created a function for it), but when attempting to play the game again, my pathways wouldn’t be correct. I figured out that I needed to put my entire game into a function and to call up that function once the user wins or loses. This is the start to fixing my problem. The next step was to create a while loop so the game would keep running after the user wins or loses. Once I established this while loop at the end of my code, the game was working perfectly.

## Conclusion:
 My takeaways from creating this text adventure game is to plan better and scale down my project. I believe that I did not plan as well as I could have initially. For my future projects, I will need to create a detailed plan that will breakdown exactly what I want the project to do. This will teach me how to execute my plans properly while as having a guide to follow. Moreover, I will scale my projects down a little in order to complete them within 2 weeks. I will begin by building the small items first, and if I have time, I will add more to it. Basically, since I am starting my journey, I want to underpromise and overdeliver. 
