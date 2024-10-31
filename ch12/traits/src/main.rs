fn main() {
    let tweet = Tweet {
        username: String::from("horse_ebooks"),
        content: String::from(
            "of course, as you probably already know, people",
            ),
            reply: false,
            retweet: false,
    };

    println!("1 new tweet: {}", tweet.summarize());
}

pub struct NewsArticle {
    pub headline: String,
    pub location: String,
    pub author: String,
    pub content: String,
}

pub trait Summary {
    fn summarize(&self) -> String;
}

impl Summary for NewsArticle {
    fn summarize(&self) -> String {
        format!("{}, by {} ({})", self.headline, self.author, self.location)
    }
}

pub struct Tweet {
    pub username: String,
    pub content: String,
    pub reply: bool,
    pub retweet: bool,
}

impl Summary for Tweet {
    fn summarize(&self) -> String {
        format!("{}: {}", self.username, self.content)
    }
}

#[cfg(test)] 
mod tests { 
    use super::*; 

    #[test] 
    fn summarize_tweet() { 
        let tweet = Tweet {
            username: String::from("me"),
            content: String::from("a message"),
            reply: false,
            retweet: false,
        };

        assert_eq!("me: a message", tweet.summarize()); 
    } 

    #[test] 
    fn summarize_news_article() { 
        let news_article = NewsArticle {
            headline: String::from("Big News"),
            location: String::from("Undisclosed"),
            author: String::from("Me"),
            content: String::from("Big News here, must follow"),
        };

        assert_eq!("Big News, by Me (Undisclosed)", news_article.summarize()); 
    } 


}
