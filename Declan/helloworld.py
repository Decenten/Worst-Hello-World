# Horrible way of doing hello world. took more thinking than print("hello world")

def helloWorld():
    # setting each letter to a var
    a = "a"
    b = "b"
    c = "c"
    d = "d"
    e = "e"
    f = "f"
    g = "g"
    h = "h"
    i = "i"
    j = "j"
    k = "k"
    l = "l"
    m = "m"
    n = "n"
    o = "o"
    p = "p"
    q = "q"
    r = "r"
    s = "s"
    t = "t"
    u = "u"
    v = "v"
    w = "w"
    x = "x"
    y = "y"
    z = "z"
    space = " "
    
    # putting each var of a letter into an array
    letters = [a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,space]

    # setting the target word, in this case hello world
    targetWord = "hello world"

    # declaring an empty array to put letters into and the string to output at the end
    completedTargetWordArr = []
    completedTargetWordStr = ""
    
    # while loop to interate over each letter and adding to empty array to make ['h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd']
    index = 0
    while completedTargetWordStr != targetWord:
        for letter in letters:
            print(letter)
            if letter == targetWord[index]:
                completedTargetWordArr += letter
                print(completedTargetWordArr)
                
        # once completed, check if the length of the array is the same length as the string, then convert the array to a string
        if len(completedTargetWordArr) == len(targetWord):
            completedTargetWordStr = completedTargetWordStr.join(completedTargetWordArr)
        index += 1

    # display hello world to the screen
    print(completedTargetWordStr)

helloWorld()