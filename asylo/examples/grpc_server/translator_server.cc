/*
 *
 * Copyright 2018 Asylo authors
 *
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
 *
 */

#include "asylo/examples/grpc_server/translator_server.h"

#include "absl/strings/str_split.h" // jinhwan

#include "absl/strings/ascii.h"
#include "absl/strings/str_cat.h"
#include "include/grpcpp/grpcpp.h"

namespace examples {
namespace grpc_server {

TranslatorServer::TranslatorServer()
    : Service(),
      // Initialize the translation map with a few known translations.
      translation_map_({{"asylo", "sanctuary"},
                        {"istio", "sail"},
                        {"kubernetes", "helmsman"}}) {}

::grpc::Status TranslatorServer::GetTranslation(
    ::grpc::ServerContext *context, const GetTranslationRequest *request,
    GetTranslationResponse *response) {
  // Confirm that |*request| has an |input_word| field.
  if (!request->has_input_word()) {
    return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                          "No input word given");
  }

////////START_ jinhwan

 ///start jinhwan_MATRIX
 
 //a[2][3] * b[3][1] 
 //input_example :{{3,2,3},{1,2,3}} {{1},{2},{1}}
 
 string input= request->word();
 string input_matrix_a;
 string input_matrix_b;
  
 std::vector<std::string> input_v= absl::StrSplit(input_data," ");
 input_matrix_a = input_v[0];
 input_matrix_b = input_v[1];

 void cell2mat(string str_matrix){
  int count_columns;  // (count of ,) +1 until first }
  int count_rows;     // (count of {) -1

  char * char_matrix =new char[str_matrix.length()+1];
   
  for(int i=0; i<`)
 } 
/*
 //start jinhwan_SUM
  string input= request->input_word();
  std::vector<std::string> input_v;
  input_v  = absl::StrSplit(input," ");

  int result_integer = std::stoi(input_v[0]) + std::stoi(input_v[1]);
  string result_string = std::to_string(static_cast<long long>(result_integer));
  
  response->set_translated_word(result_string);
  return ::grpc::Status::OK;
*/


/////////END_ jinhwan

/*
  // Confirm that the translation map has a translation for the input word.
  auto response_iterator =
      translation_map_.find(absl::AsciiStrToLower(request->input_word()));
  if (response_iterator == translation_map_.end()) {
    return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                          absl::StrCat("No known translation for \"",
                                       request->input_word(), "\""));
  }

  // Return the translation.
  response->set_translated_word(response_iterator->second);
  return ::grpc::Status::OK;
*/
  
}

}  // namespace grpc_server
}  // namespace examples 
