# Zero-Finders
Methods to find the zeros of a function

#Bisection Method
Begin with two bounds, lower and upper. If they differ in sign, then assuming continuity, there must be a zero between them. Bisect the interval and see that the sign of the function is at that point. If the sign matches the upper bound then it now becomes to upper bound if not then it becomes the lower bound. Repeat untill a value of sufficient accuracy is found.

For more info see https://en.wikipedia.org/wiki/Bisection_method.

#Newton's Method
Take a guess of the zero. Take the tangent line of that f(guess), when that line intersects the x axis, that point is now the new guess. Repeat untill a value of sufficient accuracy is found.

For more info see https://en.wikipedia.org/wiki/Newton%27s_method.