#Stacks class
#A simple class that builds stacks from lists
#
#
from sys import stdout

class stack:
    """ Stacks are linear data structures, that stores objects and pops them out in the order of First in, Last out"""
    def __init__(self,lst):
        self.ls = lst

    def push(self,obj):
        self.ls.append(obj)

    def pop(self):
        return self.ls.pop()

    def __repr__(self):
        prt =  "first in--> "
        for o in self.ls:
            prt += str(o) + " "
        prt += "<-- Last out"
        return prt

#stk = stack([1,2,3])
#stk.push(34)
#stk.push(42)
#stk.push(41)
#print stk
