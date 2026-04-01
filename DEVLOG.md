# Developer Log (DEVLOG.md)
## Express format Detector Stack Evaluator (Spring 2026)

## Allowed Entry Types
Each entry may be one of the following:
1) **Bug Fix Entry**
- The issue encountered.
- Error messages or symptoms.
- Attempts made.
- Final resolution.
2) **Edge Case / Testing Entry**
- A failure discovered through testing.
- The specific input/state that caused it.
- The change you made to handle it correctly.
3) **Engineering Decision Entry (up to 2 allowed)**
- A design decision you made.
- An alternative approach you considered.
- Why you chose one approach over another (tradeoffs).
---
### Entry 1
**Date:** 2026-03-29
**Entry Type:** Bug Fix 
**Task worked on: Implementing tokenize() in main**
**Issue or decision:*Tried to input string into the Token vector within the tokenize function*
**Error message / symptom (if applicable):*no matching member function for call to 'push_back'
no known conversion from 'string' to 'const Token'*
**What I tried:*I tried inputting having the lines scanned to be strings that are then inputted raw into the Token vector. I then tested this by ouputting the contents of this in main but I received errors.*
**Fix / resolution (or final decision):*I changed it so that I used the tocket strucutre but using the Token calss and setting its value as the string and pushing it into the Token vector.*
**Commit(s):*Fixed tokenizer*
---
### Entry 2
**Date:** 2026-03-30
**Entry Type:Bug Fix ** 
**Task worked on: Implementing and testing isValidPostfix() in mian**
**Issue or decision: incorrect outputs of ValidPostfix. I assumed that only checking if a token vector was empty, if they included parenthesis, and if the first value int eh line was an opperand would be enough to classify a postfix.**
**Error message / symptom (if applicable): Incorrect outputs with INFIX being checked as POSTFIX**
**What I tried:I tried testing Parenthesis Postfix, infix, and regular postfix.**
**Fix / resolution (or final decision): I needed to define the correct factors for what actually classifies the postfix. To determine the postfix, the ending value should just be one value and every time an operator does appear, before it should be 2 operands. More conditions are checked and overall the correct factors are checked for this postfix checker to work.**
**Commit(s):Fixed postfix checker**
---
### Entry 3
**Date:** 2026-03-31
**Entry Type:** Bug Fix 
**Task worked on: Implementing isValidInfix()**
**Issue or decision: All cases of infix incorrectly return false.**
**Error message / symptom (if applicable): No real error message, just infix outputs were outputting false on my test cases.**
**What I tried: I tried using an else box that was a generalization that the current number being checked is an operand.**
**Fix / resolution (or final decision): I changed it so that it was an else if box that checked if the current value being checked was an operand and that it wasn't a parenthesis. 
The main fix was that I realized that the parenthesis were not considered operands and I needed to make the else condition less broad.**
**Commit(s):Fixed isValidInfix function**
---
### Entry 4
**Date:** 2026-03-31
**Entry Type: Edge Case** 
**Task worked on: Implementing isValidInfix()**
**Issue or decision: The outputs for my test cases were determing that "3 + 4)" was a valid infix**
**Error message / symptom (if applicable): No real error message, just outputting incorrect ouptuts.**
**What I tried: I tried using a parenthesis count to deterine the number of front and end parenthesis were in the line.**
**Fix / resolution (or final decision): The main issue was that when I was counting for the number of equal parenthesis, I used size-1 as the limit for itteration and never actually 
checked the last value of being a parentheses. The change I made was that I added a check after the loop to count that the last token in the parenthesis count. As well,
I added a check for if the parenthesis were balanced at the end.**
**Commit(s):Fixed isValidInfix function**
---
### Entry 5
**Date:** 2026-03-31
**Entry Type: Bug Fix** 
**Task worked on: Implementing infixToPostfix()**
**Issue or decision: Operators were stacked without checking precedence without following multiplication/division priority in actual math before addtion/subtraction.**
**Error message / symptom (if applicable): No real error message, just wrong display of Postfix ordering**
**What I tried: I tried using a stack that would store all the operands for the tokens being read and then dumping it all back into output with the operands.**
**Fix / resolution (or final decision): I added an extra check for checking operands wiht a while loop that will check for higher precedence among th evalue being looked at and in the stack that will pop
the greater precedence value into output first**
**Commit(s): Fixed isValidInfix function**
---
### Entry 6
**Date:** 2026-03-31
**Entry Type:** Engineering Decision
**Task worked on: Implementing infixToPostfix() operator stack design**
**Issue or decision: I needed a way to handle how I would be able to add numbers, operators, and how to deal with parenthesis.**
**Error message / symptom (if applicable): No real error message, just wanted a design for this system.**
**What I tried: I tried to just store each of the operands and operators into their own vectors.**
**Fix / resolution (or final decision): I found it easier to just use the ArrayStack because it felt easier to order precedence within operands and as well how to handle how 
the open and closed parenthesis and the conetens inside for the output.**
**Commit(s): Fixed isValidInfix function**