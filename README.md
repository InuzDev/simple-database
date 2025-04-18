# Let's build a simple database => [DB tutorial](https://cstack.github.io/db_tutorial/)

this is a side project I created to understand how a database works. As the project says in their website, this is a sqlite clone from scratch built in C.

## Part 1 - Introduction and setting up the REPL

Quoting the first line of the website:

> as a web developer, I use relational databases every day at my job, but they're a black box to me.

this refers to the fact that he doesn't understand how they work. I can relate as I work with different databases and yet I don't fully understand how to they work.

In this project I believe I can learn at least the basic of their functionality and purpose.

As I read throught the document, I notice the they got the SQLite structure.
It goes something like this:

A query goes through a chain of components in order to retrieve or modify data. And the front-end consist of the:

- [Tokenizer](https://www.datacamp.com/blog/what-is-tokenization)
- Parser
- Code generator

Defining this terms I will quote different websites as I make my research.

> Tokenization, in the realm of Natural Language Processing (NLP) and machine learning, refers tot he process of converting a sequence of text into smaller parts, known as tokens.

So, what it does is taken some text (e.g: "Hello", "World") and then, converting into a sequence of smaller parts.
(More like a string of characters: "H", "e", "l", "l", "o", "", "W", "o", "r", "l", "d")

There are differents types of tokenization. We got the **word tokenization**, which is breaks text into individual words, **character tokenization**, this one create segments into individual characters, and the last one, **subword tokenization**, this one breaks text into units larger than characters but smaller than words.

The first (word tokenization) one is useful for languages with clear word boundaries like Spanish or English. Second one (character tokenization) is effective for languages without clear word boundaries or tasks requiring granular analysis. And the last one (subword tokenization) is beneficial for languages with complex morphology or handling out-of-vocabulary words.
