MVP
===
Solution for task (internship)

### Notes

Set of interfaces for creating MVP-structured model.

Main class - `Controller`, it contains `Model` and set of pairs: `View` and `Presenter`.

`Generator` should be realized in the way it know necessary implementations.

If implementations uses resources, allocated on heap with default allocator, for example, they should realize all of them in their destructors, it is necessary for `Holder` (it used because elements may be allocated not with standard allocator).

`impl` folder contains example of more detailed interfaces (it's not mandatory - use another interface, implementation may be used) and assumed look of `main` function.
