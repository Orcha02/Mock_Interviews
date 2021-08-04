#!/usr/bin/node
let defaultMovies = [
    {
    title: 'Jurassic Park',
    director: 'John Doe',
    year: '1990'
    },
    {
    title: 'The Dead Pool',
    director: 'Mathew Albison',
    year: '2014'
    }
]
class Movies{
    construct (title, director, year){
        this.title = title;
        this.director = director;
        this.year = year;
    }
    getMovies() {
        return (this.title, this.director, this.year)
    }
    create(){
        defaultMovies.push({title: this.title, director: this.director, year: this.year});
    }
}
class MoviesManager extends Movies {
    static remove_all_movies(){
        const empty = arr => arr.length = 0;
        empty(defaultMovies);
    }
    static search_movie(query_string){
        let findquery = false;
        let find = false;
        //for para iterar en el array
        for (let i = 0; i < defaultMovies.length; i++){
            //for para revisar el titulo
            for(let j = 0; j < query_string.length; j++){
                if (query_string[j]=== defaultMovies[i].title[j]){
                    findquery = true;
                } else {
                    findquery = false;
                    break;
                }
            }
            if (findquery === true){
                console.log("\nTitle: " + defaultMovies[i].title + "\nDirector: " + defaultMovies[i].director + "\nYear: " + defaultMovies[i].year);
                find = true;
            }
        }
        if (find === false){
        console.log("Movies not found");
        }
    }
    // else {
    //     defaultMovies.push({title: query_string, director: " ", year: " "});
    // }
    static get_movie(query_string){
        let find = false;
        for (let i = 0; i < defaultMovies.length; i++){
            if (query_string === defaultMovies[i].title){
                console.log("Title: " + defaultMovies[i].title + "\nDirector: " + defaultMovies[i].director + "\nYear: " + defaultMovies[i].year);
                find = true;
                break;
            }
        }
        if (find === false){
            console.log("Movie not found");
        }
    }
    static delete_movie(query_string){
        let find = false;
        for (let i = 0; i < defaultMovies.length; i++){
            if (query_string === defaultMovies[i].title){
                defaultMovies.splice(i, 1);
                //console.log(Movie ${query_string} was deleted correctly!);
                find = true;
                break;
            }
        }
        if (find === false){
            console.log("Movie not found");
        }
    }
}
const movies = new Movies();
movies.title = 'Viuda negra';
movies.director = 'Jaime aricapa';
movies.year = '2021';
const movies1 = new Movies();
movies1.title = 'Vida negra';
movies1.director = 'Jaime aricapa';
movies1.year = '2019';
movies.create();
movies1.create();
// console.log(defaultMovies);
// MoviesManager.search_movie('ju');
MoviesManager.get_movie('Jurassic Park')
// MoviesManager.search_movie('Viu');
MoviesManager.delete_movie('Jurassic Park');
console.log(defaultMovies);
// console.log(defaultMovies);
// MoviesManager.remove_all_movies();
// console.log(defaultMovies);
