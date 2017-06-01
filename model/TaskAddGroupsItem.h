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

/*
 * TaskAddGroupsItem.h
 * 
 * 
 */

#ifndef TaskAddGroupsItem_H_
#define TaskAddGroupsItem_H_


#include "ModelBase.h"

#include "GroupIds.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

/// <summary>
/// 
/// </summary>
class  TaskAddGroupsItem
	: public ModelBase
{
public:
    TaskAddGroupsItem();
    virtual ~TaskAddGroupsItem();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// TaskAddGroupsItem members
	   
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GroupIds> getData() const;
    void setData(std::shared_ptr<GroupIds> value);
        
protected:
    std::shared_ptr<GroupIds> m_Data;
    };

}
}
}
}

#endif /* TaskAddGroupsItem_H_ */
