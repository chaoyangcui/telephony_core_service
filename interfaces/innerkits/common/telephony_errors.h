/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TELEPHONY_TELEPHONY_ERRORS_H
#define TELEPHONY_TELEPHONY_ERRORS_H
#include <errors.h>

namespace OHOS {
const int TELEPHONY_NO_ERROR = 0;

enum {
    TELEPHONY_COMMON = 0x00,
    TELEPHONY_CALL_MANAGER = 0x01,
    TELEPHONY_CELLULAR_CALL = 0x02,
    TELEPHONY_CELLULAR_DATA = 0x03,
    TELEPHONY_SMS_MMS = 0x04,
    TELEPHONY_STATE_REGISTRY = 0x05,
    TELEPHONY_NET_MANAGER = 0x06,
    TELEPHONY_CORE_SERVICE_SIM = 0x07,
    TELEPHONY_CORE_SERVICE_NETWORK_SEARCH = 0x08,
    TELEPHONY_CORE_SERVICE_CORE = 0x09,
};

// Error code for common
constexpr ErrCode COMMON_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_COMMON);

enum {
    TELEPHONY_FAIL = COMMON_ERR_OFFSET,
    TELEPHONY_ARGUMENT_MISMATCH,
    TELEPHONY_ARGUMENT_INVALID,
    TELEPHONY_ARGUMENT_NULL,
    TELEPHONY_MEMCPY_FAIL,
    TELEPHONY_MEMSET_FAIL,
    TELEPHONY_LOCAL_PTR_NULL,
    TELEPHONY_LOCAL_STORAGE_EMPTY,
    TELEPHONY_BINDER_PID_MISMATCH,
    TELEPHONY_BINDER_UID_MISMATCH,
    TELEPHONY_SOCKET_ERR,
    TELEPHONY_PERMISSION_ERR,
    TELEPHONY_BAD_TYPE,
    TELEPHONY_WRITE_DISCRIPTOR_TOKEN_FAIL,
    TELEPHONY_WRITE_REPLY_FAIL,
    TELEPHONY_CONNECT_SYSTEM_ABILITY_STUB_FAIL,
    TELEPHONY_ADD_DEATH_RECIPIENT_FAIL,
    TELEPHONY_REGISTER_CALLBACK_FAIL,
};

// Error code for telephony call manager
constexpr ErrCode CALL_MANAGER_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_CALL_MANAGER);

// Error code for telephony cellular call
constexpr ErrCode CELLULAR_CALL_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_CELLULAR_CALL);

// Error code for telephony cellular data
constexpr ErrCode CELLULAR_DATA_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_CELLULAR_DATA);

// Error code for telephony sms mms
constexpr ErrCode SMS_MMS_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_SMS_MMS);

// Error code for telephony state registry
constexpr ErrCode STATE_REGISTRY_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_STATE_REGISTRY);

// Error code for telephony ner work
constexpr ErrCode NET_MANAGER_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_NET_MANAGER);

// Error code for telephony sim of core service
constexpr ErrCode CORE_SERVICE_SIM_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_CORE_SERVICE_SIM);

// Error code for telephony network search of core service
constexpr ErrCode CORE_SERVICE_NETWORK_SEARCH_ERR_OFFSET =
    ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_CORE_SERVICE_NETWORK_SEARCH);

// Error code for telephony core of core service
constexpr ErrCode CORE_SERVICE_CORE_ERR_OFFSET = ErrCodeOffset(SUBSYS_TELEPONY, TELEPHONY_CORE_SERVICE_CORE);
} // namespace OHOS
#endif // TELEPHONY_TELEPHONY_ERRORS_H