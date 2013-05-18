#This is a piece of code that examines if Brackets line up using stacks

paran = '()'
curly = '{}'
block = '[]'
opening = ['(','{','[']
closing = [')','}',']']

str1 = "This [is some ] (great words)"
str2 = "{Test this [if you ]can}"
str3 = "(This should{ not ) work)"
str4 = "[This shouldnot work at all"
str5 = "This is not legit}"

strlist = [str1,str2,str3,str4,str5]

def Examine(exp):
    """This function takes an expression and determines if the brackets match or not"""
    stack = []
    print exp
    #we go through each letter to determine if the brackets match
    for l in exp:

        #if it is opening, it goes in, if it is closing we pop the opening to compare
        if l in opening:
            stack.append(l)
        elif (l in closing):

            #this is to make sure the stack is not empty, so that the .pop() won't have an index error
            try:
                bs = stack.pop() + l
            except IndexError:
                print ">>>>>>>>",
                print "Error: no opening bracket for the following: ",
                print l
                return False

            if ((bs == paran) or (bs == curly) or (bs == block)):
                pass
            else:
                print ">>>>>>>>",
                print "Erorr: %s and %s don't match"%(bs[0],l)
                return False


    if (stack != []):
        print ">>>>>>>>",
        print "Error: no closing bracket for the following: ",
        print stack
        return False

def testing():
    """This function tests the function Examine"""
    for s in strlist:
        Examine(s)

testing()
