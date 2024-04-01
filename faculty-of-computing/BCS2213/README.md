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
- Select `Unicode (encoded as UTF-8)` (Markup)
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

## Reference
- [Formal Methods in Software Engineering PDF](https://ftms.edu.my/v2/wp-content/uploads/2019/02/StudyGuideSD3049.pdf)
- [Z Notation on Wikipedia](https://en.wikipedia.org/wiki/Z_notation)
- [Z Notation on Fandom](https://formalmethods.fandom.com/wiki/Z_notation)
- [Glossary of Z Notation](https://staff.washington.edu/jon/z/glossary.html)
- [Z : A Formal Specification Notation](https://link.springer.com/chapter/10.1007/978-1-4471-0701-9_1)
- [The Way of Z Practical Programming with Formal Methods](https://staff.washington.edu/jon/z-book/index.html)
