/*************************************************************************
    > File Name: redis.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#ifndef _REDIS_H_
#define _REDIS_H_

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

#include <hiredis/hiredis.h>

class Redis
{
	public:
	  Redis(){};
	  ~Redis()
	  {
			m_connect = NULL;
			m_reply = NULL;
	  }
	  bool connect(string host,int port)
	  {

		this->m_connect = redisConnect(host.c_str(),port);
		if(this->m_connect != NULL && this->m_connect->err)
		{
			cout<<"connect error:"<<this->m_connect->errstr<<endl;
			return 0;
		}
		return 1;
	  }
	  string get(string key)
	  {
		this->m_reply = (redisReply *)redisCommand(this->m_connect, "GET %s", key.c_str());
		string str = this->m_reply->str;
		freeReplyObject(this->m_reply);
		return str;
	  }
	  void set(string key,string value)
	  {
			redisCommand(this->m_connect, "SET %s %s", key.c_str(), value.c_str());
	  }
	private:
	  redisContext *m_connect;
	  redisReply *m_reply;
};

#endif//_REDIS_H_
