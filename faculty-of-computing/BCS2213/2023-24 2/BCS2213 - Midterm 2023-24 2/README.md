# Question 1
P = Goods are satisfactory
Q = Money will be refunded

## if the goods are satisfactory, then your money will be refunded
not p imply q
## Goods satisfactory or money refunded
p or q
## If your money is not refunded, then the goods are satisfactory
not q imply p
## If the goods are satisfactory, then your money will not be refunded
p imply not q

## Truth Table
|p|q|not p|not q|not p imply q|p or q|not q imply p|p imply not q|
|-----|-----|-----|-----|-----|-----|-----|-----|
|T|T|F|F|T|T|T|F|
|T|F|F|T|T|T|T|T|
|F|T|T|F|T|T|T|T|
|F|F|T|T|F|F|F|T|
|||||V|V|V|X|

# Question 2 (Not Complete)
|||
|---|---|
|not(not(p and q) or p) |De Morgan's Law|
|not not(p and q) or not p|Double Negation|
|||
FROM Brave AI
```
not(not(p and q) or p) is equivalent to not(not(p) or not(q) or p).
Using De Morgan’s law, we can rewrite this as not(not(p) and not(not(q) or p)).
Now, we can apply the distributive property again to get not(not(p) and (not(q) or p)).
This is equivalent to (not(p) and not(q)) or (not(p) and p), since or is commutative and associative.
Now, we can simplify this to not(p) and (not(q) or not(p)), since and is commutative and associative.
This is equivalent to not(p) and not(not(q) or p), since or is commutative and associative.
Using De Morgan’s law again, we can rewrite this as not(p) and not(not(not(p) or q)).
This is equivalent to not(p) and not(not(p)) or not(q), since and is distributive over not.
Now, we can simplify this to not(p) and p or not(q), since not(not(p)) is equivalent to p.
This is a contradiction, since not(p) and p is always false.
Therefore, not(not(p and q) or p) is a contradiction.
```
# Question 3 (Kinda Complete)
```
─ [ CUSTOMER,BANK ] └

┌BankSchema
  nric : ℙ CUSTOMER
  account : ℙ BANK
  deposit : ℕ
  customer: CUSTOMER → BANK
  balance : BANK → ℕ
|
  deposit = 0
└

┌ New
  ΔBankSchema
  nric?: CUSTOMER
  account? : BANK
|
  nric? ∈ nric
  	customer′ = customer ∪ { nric? ↦ account? }
└

┌ Deposit
  ΔBankSchema
  deposit? : ℕ
  balance! : ℕ
  account? : BANK
|
	account? ∈ account
		balance! = deposit? + balance
  		balance′ = balance ∪ { account? ↦  balance }
└
```
