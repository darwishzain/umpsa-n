## This is Formal Methods

## Using [Community Z Tools](https://czt.sourceforge.net/)
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
- [Glossary of Z Notation](https://staff.washington.edu/jon/z/glossary.html)
