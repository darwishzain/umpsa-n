## This is Formal Methods

## [Community Z Tools Installation](https://czt.sourceforge.net/)

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

## Navigation
- Pandora Hotel until week 4 [here](lab-w3-w4.zed8)
- Answer for Quiz 1 [here](quiz1-w4.zed8) CHECK
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
### Text
- [Formal Methods in Software Engineering](https://ftms.edu.my/v2/wp-content/uploads/2019/02/StudyGuideSD3049.pdf) PDF
- [Glossary of Z Notation](https://staff.washington.edu/jon/z/glossary.html) WEB
- [Using Z](https://www.cs.cmu.edu/~15819/zedbook.pdf) PDF
- [The Z Specification Language](https://formal.kastel.kit.edu/~beckert/teaching/Spezifikation-SS04/11Z.pdf) PDF
- [The Z Notation: A Reference Manual](https://www.cs.umd.edu/~mvz/handouts/z-manual.pdf) PDF
### Video
- [Introduction to Z Notation by Quothmar](https://www.youtube.com/watch?v=qfEe9luJmVE) Youtube
 
