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