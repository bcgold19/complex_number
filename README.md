# complex_number
This is a project for the complex number field. 
radius,norm,angle, polar representation are available

## 1. Introduction to Complex Number
if z is a complex number, then it can be written as 
   z = a+bi = radius*(cos(angle)+sin(angle)*i) 
     = radius*(exp(i*arctan(b/a))

## 2. How to use?
1) printing out
```c++
complexnumber z1(2, 1);
cout<<z1<<endl;
```
2) addition
```c++
complexnumber z1(2,1);
complexnumber z2(3,1);
complexnumber z3(z1+z2);
cout<<z3<<endl;
```
3) multiplication/division
```c++
complexnumber z4(z1*z2);
cout<<z4<<endl;
complexnumber z5(z1/z2);
```

4) norm/radius/angle :return double
```c++
z1.norm();
z1.radius();
z1.angle();
```

5) polar representation
it directly print the result
```c++
z1.polarform();
```
