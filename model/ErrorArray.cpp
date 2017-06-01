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



#include "ErrorArray.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

ErrorArray::ErrorArray()
{
    
}

ErrorArray::~ErrorArray()
{
}

void ErrorArray::validate() 
{
    // TODO: implement validation
}

web::json::value ErrorArray::toJson() const
{
    web::json::value val = web::json::value::object();
     
	{
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Errors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("errors")] = web::json::value::array(jsonArray);
            }
    

    return val;
}

void ErrorArray::fromJson(web::json::value& val)
{
    {
        m_Errors.clear();
        std::vector<web::json::value> jsonArray;
                for( auto& item : val[U("errors")].as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Errors.push_back( std::shared_ptr<Error>(nullptr) );
            }
            else
            {
                std::shared_ptr<Error> newItem(new Error());
                newItem->fromJson(item);
                m_Errors.push_back( newItem );
            }
            
        }
    }
    
}

void ErrorArray::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	{
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Errors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("errors"), web::json::value::array(jsonArray), U("application/json")));
            }
    
}

void ErrorArray::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    {
        m_Errors.clear();
                
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("errors"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Errors.push_back( std::shared_ptr<Error>(nullptr) );
            }
            else
            {
                std::shared_ptr<Error> newItem(new Error());
                newItem->fromJson(item);
                m_Errors.push_back( newItem );
            }
            
        }
    }
    
}
    
   
std::vector<std::shared_ptr<Error>>& ErrorArray::getErrors()
{
	return m_Errors;
}

}
}
}
}

