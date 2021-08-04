Build a small Movies application which will allow us to create a list of movies, delete them and display the entries..all this is done using 2 classes and objects.

## Requirements.

Database must be an Array with the following Structure. It must have at least 4 records by default.

```jsx
let defaultMovies = [
  {
    title: "Jurassic Park",
    director: "John Doe",
    year: "1990",
  },
  {
    title: "The Dead Pool",
    director: "Mathew Albison",
    year: "2014",
  },
];
```

- We will have a Class called movies. The constructor of this class will accept 3 params. The constructor will also add the item at the end of the array as needed.

```jsx
constructor(title, director, year);
```

- This will create a new object of the class movie and add the information to the above array.

---

- We need another class, this one handles all the movies, this one can be called MoviesManager or something similar.

## Inside that class we have a couple of functions.

```jsx
// remove all movies from the array and destroys all objects
remove_all_movies();

// Search for a movie in the array and checks if a object with that movie name
// already exists in memory, if not, it creates the object
search_movie(query_string);

// Search for a movie title, if object already exists, return the object y not, creates
// the object and returns it.
get_movie(movie_title);

// Deletes the object if it's created, and removes the movie from the array.
delete_movie(movie_title);
```

This class will create a single object, this is called a singleton, extra kudos if you implement a singleton.
