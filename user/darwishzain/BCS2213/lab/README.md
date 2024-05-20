# Formal Methods Lab
## Lab Week 2 : Z Notation
You have to propose the Z formal specification for all the scenario below. Design the required
static schema and relevant dynamic schema based on the system requirement. Other schema such
as initialisation is not required unless stated in the requirements. Ensure you have a description
for all the schema you proposed.
1. Calculate the area of rectangular and triangle. [Lab 1.1](./lab/lab-1-1-w2.z8)
2. Calculate the percentage of 2% discount for every purchase of books and stationery.[Lab 1.2](./lab/lab-1-2-w2.z8)
3. Calculate the average and median values for each student assessment.[Lab 1.3](./lab/lab-1-3-w2.z8)
4. Calculate the value of CPA points for each semester.[Lab 1.4](./lab/lab-1-4-w2.z8)
5. Calculate the value of CGPA points for each semester.[Lab 1.5](./lab/lab-1-5-w2.z8)

## Lab Week 3 : Z Notation
Pandora Hotel requires a system to record the customer check in date and check out date to
calculate the price for their stay at the hotel. Suggest a Z specification model of a software
system to record hotel customer check in and check out date system. The specification should
support these requirements:
1. The system able to register a new customer into the system.
2. The system able to check in a customer in the hotel.
3. The system able to check out customer from the hotel and display the number of
days the customer stays in using check in and check out date. Then display the
price by multiply the stay in days with 200.
4. The system able to query whether a particular customer is check-in or check-out
5. The system able to output the customer who are currently checked in.
6. Only registered customer can check in and out.
You must design the specification using Z. All operations should have appropriate pre and post
conditions. Your specification must consist of:
a) The required state schemas of the above system, all required definitions and initial
schema.
b) All required schemas to meet the system’s requirements.
c) Define all the free type definition used in the schemas
d) A simple comments for all the schemas

## Lab Week 4 : Continue with Lab Week 3
### Power Set

```
  nric ℙ ID
  #The set nric belongs in set ID 
```
### Domain VS Range
```
  nric dom name
  nric range phonenum
  #All nric has name but not all nric has phonenum
```
