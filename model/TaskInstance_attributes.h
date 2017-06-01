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
 * TaskInstance_attributes.h
 * 
 * 
 */

#ifndef TaskInstance_attributes_H_
#define TaskInstance_attributes_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

/// <summary>
/// 
/// </summary>
class  TaskInstance_attributes
	: public ModelBase
{
public:
    TaskInstance_attributes();
    virtual ~TaskInstance_attributes();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// TaskInstance_attributes members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTaskId() const;
    void setTaskId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getInstanceId() const;
    void setInstanceId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getGroupId() const;
    void setGroupId(utility::string_t value);
    bool group_idIsSet() const;
    void unsetGroup_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    void setUserId(utility::string_t value);
    bool user_idIsSet() const;
    void unsetUser_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getPriority() const;
    void setPriority(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getDelegateDate() const;
    void setDelegateDate(utility::string_t value);
    bool delegate_dateIsSet() const;
    void unsetDelegate_date();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStartDate() const;
    void setStartDate(utility::string_t value);
    bool start_dateIsSet() const;
    void unsetStart_date();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFinishDate() const;
    void setFinishDate(utility::string_t value);
    bool finish_dateIsSet() const;
    void unsetFinish_date();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTaskDueDate() const;
    void setTaskDueDate(utility::string_t value);
    bool task_due_dateIsSet() const;
    void unsetTask_due_date();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRiskDate() const;
    void setRiskDate(utility::string_t value);
    bool risk_dateIsSet() const;
    void unsetRisk_date();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDuration() const;
    void setDuration(int32_t value);
    bool durationIsSet() const;
    void unsetDuration();
    /// <summary>
    /// 
    /// </summary>
    double getInstanceOverduePercentage() const;
    void setInstanceOverduePercentage(double value);
    bool instance_overdue_percentageIsSet() const;
    void unsetInstance_overdue_percentage();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getData() const;
    void setData(utility::string_t value);
    bool dataIsSet() const;
    void unsetData();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContent() const;
    void setContent(utility::string_t value);
    bool contentIsSet() const;
    void unsetContent();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedAt() const;
    void setCreatedAt(utility::string_t value);
    bool created_atIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUpdatedAt() const;
    void setUpdatedAt(utility::string_t value);
    bool updated_atIsSet() const;
    void unsetUpdated_at();
    
protected:
    utility::string_t m_Task_id;
    utility::string_t m_Instance_id;
    utility::string_t m_Group_id;
    bool m_Group_idIsSet;
utility::string_t m_User_id;
    bool m_User_idIsSet;
utility::string_t m_Status;
    utility::string_t m_Priority;
    utility::string_t m_Delegate_date;
    bool m_Delegate_dateIsSet;
utility::string_t m_Start_date;
    bool m_Start_dateIsSet;
utility::string_t m_Finish_date;
    bool m_Finish_dateIsSet;
utility::string_t m_Task_due_date;
    bool m_Task_due_dateIsSet;
utility::string_t m_Risk_date;
    bool m_Risk_dateIsSet;
int32_t m_Duration;
    bool m_DurationIsSet;
double m_Instance_overdue_percentage;
    bool m_Instance_overdue_percentageIsSet;
utility::string_t m_Data;
    bool m_DataIsSet;
utility::string_t m_Content;
    bool m_ContentIsSet;
utility::string_t m_Created_at;
    bool m_Created_atIsSet;
utility::string_t m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* TaskInstance_attributes_H_ */
