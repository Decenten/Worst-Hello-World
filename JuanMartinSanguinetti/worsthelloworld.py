# -*- coding: utf-8 -*-
"""WorstHelloWorld.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1NZVnWxUjmStaj3IoguxmAWWiK6WYelZ-
"""

import string
string.ascii_letters
'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
import random

def yes_or_no(question):
    answer = input(question + "       Answer y or n): ").lower().strip()
    print("")
    while not(answer == "y" or answer == "yes" or answer == "n" or answer == "no"):
        print("Input yes or no")
        answer = input(question + "(y/n):").lower().strip()
        print("")
    if answer[0] == "y":
        return True
    else:
        return False

phrase = ""
answer_end = ""

while not(answer_end == "y" or answer_end == "yes"):
        
        new_character = random.choice(string.ascii_letters)

        if yes_or_no(str("Is this the letter you want? --> " + new_character)):
          phrase = phrase + new_character
          print(phrase)
          print("")
          answer_end = input("Have you finished your phrase?(y/n): ").lower().strip()
          print("")
          
          if not(answer_end == "y" or answer_end == "yes"):
            if yes_or_no(str('Do you want to add a space after "' + phrase + '"??')):
              phrase = phrase + " "
          

        else:
          answer_end = input("Have you finished your phrase?(y/n): ").lower().strip()

print("Congratulations! Your phrase is")
print(phrase)

