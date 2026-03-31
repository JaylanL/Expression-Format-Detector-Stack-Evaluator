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
**Date:** YYYY-MM-DD
**Entry Type:** Bug Fix / Edge Case / Engineering Decision
**Task worked on:**
**Issue or decision:**
**Error message / symptom (if applicable):**
**What I tried:**
**Fix / resolution (or final decision):**
**Commit(s):**
---
### Entry 4
**Date:** YYYY-MM-DD
**Entry Type:** Bug Fix / Edge Case / Engineering Decision
**Task worked on:**
**Issue or decision:**
**Error message / symptom (if applicable):**
**What I tried:**
**Fix / resolution (or final decision):**
**Commit(s):**
---
### Entry 5
**Date:** YYYY-MM-DD
**Entry Type:** Bug Fix / Edge Case / Engineering Decision
**Task worked on:**
**Issue or decision:**
**Error message / symptom (if applicable):**
**What I tried:**
**Fix / resolution (or final decision):**
**Commit(s):**
---
### Entry 6
**Date:** YYYY-MM-DD
**Entry Type:** Bug Fix / Edge Case / Engineering Decision
**Task worked on:**
**Issue or decision:**
**Error message / symptom (if applicable):**
**What I tried:**
**Fix / resolution (or final decision):**
**Co