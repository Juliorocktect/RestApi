#include <string>
class Comment
{
public:
	Comment(std::string videoId, std::string content, std::string authorId);
	~Comment();

private:
	std::string videoId;
	std::string content;
	std::string authorId;
	int likes;
	int dislikes;
};

Comment::Comment(
	std::string videoId,
	std::string content,
	std::string authorId)
{
	this->videoId = videoId;
	this->content = content;
	this->authorId = authorId;
	this->likes = 0;
	this->dislikes = 0;
}

Comment::~Comment()
{
	free(&videoId);
	free(&content);
	free(&authorId);
	free(&likes);
	free(&dislikes);
}