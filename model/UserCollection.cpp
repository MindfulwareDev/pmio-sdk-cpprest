/**
 * ProcessMaker API
 * This ProcessMaker I/O API provides access to a BPMN 2.0 compliant workflow engine api that is designed to be used as a microservice to support enterprise cloud applications.  The current Alpha 1.0 version supports most of the descriptive class of the BPMN 2.0 specification.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@processmaker.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "UserCollection.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

UserCollection::UserCollection()
{
    m_DataIsSet = false;
    m_MetaIsSet = false;
    
}

UserCollection::~UserCollection()
{
}

void UserCollection::validate() 
{
    // TODO: implement validation
}

web::json::value UserCollection::toJson() const
{
    web::json::value val = web::json::value::object();
     
	{
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Data )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0) 
        {
            val[U("data")] = web::json::value::array(jsonArray);
        }
    }
    if(m_MetaIsSet)
    {
        val[U("meta")] = ModelBase::toJson(m_Meta);
    }
    

    return val;
}

void UserCollection::fromJson(web::json::value& val)
{
    {
        m_Data.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("data")))
        {
        for( auto& item : val[U("data")].as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Data.push_back( std::shared_ptr<User>(nullptr) );
            }
            else
            {
                std::shared_ptr<User> newItem(new User());
                newItem->fromJson(item);
                m_Data.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("meta")))
    {
        if(!val[U("meta")].is_null()) 
        {
            std::shared_ptr<Meta> newItem(new Meta());
            newItem->fromJson(val[U("meta")]);
            setMeta( newItem );
        }
                
    }
    
}

void UserCollection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	{
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Data )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0) 
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("data"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_MetaIsSet)
    {
        if (m_Meta.get())
        {
            m_Meta->toMultipart(multipart, U("meta."));
        }
                
    }
    
}

void UserCollection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    {
        m_Data.clear();
        if(multipart->hasContent(U("data")))
        {            
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("data"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Data.push_back( std::shared_ptr<User>(nullptr) );
            }
            else
            {
                std::shared_ptr<User> newItem(new User());
                newItem->fromJson(item);
                m_Data.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("meta")))
    {
        if(multipart->hasContent(U("meta")))
        {
            std::shared_ptr<Meta> newItem(new Meta());
            newItem->fromMultiPart(multipart, U("meta."));
            setMeta( newItem );
        }
                
    }
    
}
    
   
std::vector<std::shared_ptr<User>>& UserCollection::getData()
{
	return m_Data;
}
bool UserCollection::dataIsSet() const
{
    return m_DataIsSet;
}
void UserCollection::unsetData() 
{
    m_DataIsSet = false;
}
std::shared_ptr<Meta> UserCollection::getMeta() const
{
	return m_Meta;
}
void UserCollection::setMeta(std::shared_ptr<Meta> value)
{
	m_Meta = value;
    m_MetaIsSet = true;
}
bool UserCollection::metaIsSet() const
{
    return m_MetaIsSet;
}
void UserCollection::unsetMeta() 
{
    m_MetaIsSet = false;
}

}
}
}
}

