## This is Formal Methods

## Using [Community Z Tools](https://czt.sourceforge.net/)
P/S: I can't install on my device too
### New Project
- Open `CZT.exe`
- `File>New>CZT Project`
- Input `Project Name`
- `Finish`

### New Z Specification
- `File>New>Z Specification`
- Input `Name`
- Select `Unicode (encoded as UTF-8)`
- `Finish`

### Basic 
#### State Variable Schema
```
┌ CounterSchema
	counter, maximum : ℤ
|
	0<counter<maximum
└
```
#### Initialization Schema
```
┌ InitCounter
	CounterSchema
|
	counter = 0
└
```
#### Increment Schema
```
┌ IncrementOp
	ΔCounterSchema
|
	counter≤maximum
		counter = counter +1
└
```
#### Decrement Schema
```
┌ DecrementOp
	ΔCounterSchema
	input1?:ℤ
|
	counter≥input1?
		counter = counter − input1?
└
```
#### Display Schema
```
┌ DisplayOp
	ΞCounterSchema
	output1! : ℕ
|
	output1! = counter
└
```

|Topic|Subtopic|
|---|---|
|Chapter 1. Introduction to Formal methods.|1.1. Theory and principles of Formal Methods in Software engineering|
|___|1.2. Role of formal specification and analysis techniques in the software development cycle|
||1.3. Formal specification languages and analysis techniques|
||1.4. Applications of Formal Methods|
||1.5. The benefits and importance of Formal Specification|
||1.6. The drawback of Formal Methods|
|Chapter 2: Specification of software systems (SET).|2.1 Introduction To SET|
||2.2 Common Universal Sets|
||2.3 Notation for Describing a Set|
||2.4 Set Operations|
||2.4.1 Union|
||2.4.2 Intersection|
||2.4.3 subsect|
||2.4.4 Complement and|
||2.4.5 Difference.|
||2.4.6 Cartesian product|
||2.5 Example of set in Z notation|
|Chapter 3: Specification of software systems (Function and Relation)|3.1 What is function|
||3.2 Partial functions|
||3.3 Total Function|
||3.4 Partial injection|
||3.5 Total injection|
||3.6 Function application|
||3.7 What is Relation|
||3.8 Bijections|
||3.9 Binary relation|
||3.10 Maplet|
||3.11 Domain and Range|
|Chapter 4: Specification of software systems (Propositional Logic )|4.1 Introduction to Propositional Logic|
||4.1.1 Propositional Logic (Syntax)|
||4.2 Logical Operator|
||4.2.1 Negation Operator|
||4.2.2 Conjunction Operator|
||4.2.3 Disjunction Operator|
||4.2.4 Exclusive Operator|
||4.2.5 Implication Operator|
||4.2.6 Biconditional Operator|
||4.2.7 NAND Operators|
||4.2.8 NOR Operator|
||4.3 Example of propositional logic in Z specification.|
||4.4 Tautology/Contradiction/Contingency|
||4.5 Logical Equivalences|
||4.6 Implication Equivalences|
||4.7 Biconditional Equivalence|
||4.8 Simplifying Propositions|
|Chapter 5: Specification of software systems (Predicate Logic and Quantifiers ).|5.1 Introduction of Predicate Logic|
||5.2 Components of predicate logic|
||5.3 Predicate Logic Connectives|
||5.4 Quantifiers|
||5.5 Universal Quantifier|
||5.6 Existential Quantifier|
||5.7 Functions in Predicate Logic|
|Chapter 6: Specification of software systems (Series or Sequence ).|6.1 Introduction of series/sequence|
||6.2 Sigmoid|
||6.3 Finite Sequence|
||6.4 Infinite Sequence|
||6.5 Arithmetic Sequence|
||6.6 Geometric Sequence|
||6.7 Find Sequence for a given term|
||6.8 Find Sum for a given sequence and term|
|||9 Chapter 7: Formal approaches to software modelling and analysis 7.1 Finite state machines|
||7.2 Transition systems 10 Chapter 7: Formal approaches to software modelling and analysis|
||7.3 Introduction to UPPAAL|
||7.4 Timed automaton|
||7.5 UPPAAL Toolbox|
|Chapter 8: Application to Formal Specification|8.1. Analyze Stage|
||8.2. Design Stage|
|Chapter 9: Mathematical Proof|9.1. Direct Proof|
||9.2. Contradiction Proof|
||9.3. Contra positive Proof|
||9.4. Induction Proof|
|Chapter 10: Project Work: |10.1 Practical exercises and projects applying formal methods to software engineering problems.|
||10.2 Development of formal specifications, models, and verification tasks.|

## Reference
- [Formal Methods in Software Engineering PDF](https://ftms.edu.my/v2/wp-content/uploads/2019/02/StudyGuideSD3049.pdf)
- [Z Notation on Wikipedia](https://en.wikipedia.org/wiki/Z_notation)
- [Z Notation on Fandom](https://formalmethods.fandom.com/wiki/Z_notation)
- [Glossary of Z Notation](https://staff.washington.edu/jon/z/glossary.html)
- [Z : A Formal Specification Notation](https://link.springer.com/chapter/10.1007/978-1-4471-0701-9_1)
- [The Way of Z Practical Programming with Formal Methods](https://staff.washington.edu/jon/z-book/index.html)
