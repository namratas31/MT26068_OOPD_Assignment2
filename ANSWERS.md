Assignment 2 - Answers
Questions Attempted
Q1: Journal
Q2: EBook
Q3: AudioBook and Thesis

Q2: Code Duplication
Book and EBook both store author information and ISBN-related information, resulting in duplicated code. This duplication could be reduced by introducing a common base class for shared publication metadata and making both classes inherit from it.

Q3: Design Decisions
AudioBook is derived from ElectronicResource because it is a digital resource that can be accessed electronically.
Thesis is derived from Resource because it represents an academic publication with university, degree and supervisor details. It is usually free, so its unit price can be set to zero.
