#include <string.h>
#include <string>
#include <chrono>
#include <random>
#include "Comment.cpp"
using namespace std;

class Video
{
public:
	Video(string title, string userId, string profilePicture, string videoUrl, string thumbnailUrl,vector<Comment> comments);
	~Video();

private:
	
	string id;
	string title;
	string userId;
	string profilePicture;
	int likes;
	string videoUrl;
	int views;
	string thumbnailUrl;
	string uploadDate;
	vector<Comment> comments;
};

Video::Video(string title,string userId,string profilePicture,string videoUrl,string thumbnailUrl,vector<Comment> comments)
{
	this->id = "sdfnsdfipnspiuhoiuhseijufnsdfjb";
	this->title = title;
	this->userId = userId;
	this->profilePicture = profilePicture;
	this->likes = 0;
	this->videoUrl = videoUrl;
	this->views = 0;
	this->thumbnailUrl = thumbnailUrl;
	this->uploadDate = "Today";
	this->comments = comments;

}

Video::~Video()
{
	free(&id);
	free(&title);
	free(&userId);
	free(&profilePicture);
	free(&likes);
	free(&videoUrl);
	free(&views);
	free(&thumbnailUrl);
	free(&uploadDate);
	free(&comments);
}