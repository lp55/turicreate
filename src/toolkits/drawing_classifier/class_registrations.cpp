/* Copyright © 2019 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
#include "class_registrations.hpp"
#include "data_preparation.hpp"

#include <model_server/lib/toolkit_function_macros.hpp>

namespace turi {
namespace drawing_classifier {

BEGIN_FUNCTION_REGISTRATION
REGISTER_FUNCTION(_drawing_classifier_prepare_data, "data", "feature")
END_FUNCTION_REGISTRATION

}// drawing_classifier
}// turi
