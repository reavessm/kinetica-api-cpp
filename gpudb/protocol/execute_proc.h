/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __EXECUTE_PROC_H__
#define __EXECUTE_PROC_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #executeProc(const ExecuteProcRequest&) const}.
     * <p>
     * Executes a proc. This endpoint is asynchronous and does not wait for the
     * proc to complete before returning.
     */
    struct ExecuteProcRequest
    {

        /**
         * Constructs an ExecuteProcRequest object with default parameter
         * values.
         */
        ExecuteProcRequest() :
            procName(std::string()),
            params(std::map<std::string, std::string>()),
            binParams(std::map<std::string, std::vector<uint8_t> >()),
            inputTableNames(std::vector<std::string>()),
            inputColumnNames(std::map<std::string, std::vector<std::string> >()),
            outputTableNames(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an ExecuteProcRequest object with the specified
         * parameters.
         * 
         * @param[in] procName_  Name of the proc to execute. Must be the name
         *                       of a currently existing proc.
         * @param[in] params_  A map containing named parameters to pass to the
         *                     proc. Each key/value pair specifies the name of
         *                     a parameter and its value.
         * @param[in] binParams_  A map containing named binary parameters to
         *                        pass to the proc. Each key/value pair
         *                        specifies the name of a parameter and its
         *                        value.
         * @param[in] inputTableNames_  Names of the tables containing data to
         *                              be passed to the proc. Each name
         *                              specified must be the name of a
         *                              currently existing table. If no table
         *                              names are specified, no data will be
         *                              passed to the proc.
         * @param[in] inputColumnNames_  Map of table names from @a
         *                               inputTableNames to lists of names of
         *                               columns from those tables that will be
         *                               passed to the proc. Each column name
         *                               specified must be the name of an
         *                               existing column in the corresponding
         *                               table. If a table name from @a
         *                               inputTableNames is not included, all
         *                               columns from that table will be passed
         *                               to the proc.
         * @param[in] outputTableNames_  Names of the tables to which output
         *                               data from the proc will be written. If
         *                               a specified table does not exist, it
         *                               will automatically be created with the
         *                               same schema as the corresponding table
         *                               (by order) from @a inputTableNames,
         *                               excluding any primary and shard keys.
         *                               If a specified table is a
         *                               non-persistent result table, it must
         *                               not have primary or shard keys. If no
         *                               table names are specified, no output
         *                               data can be returned from the proc.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li> gpudb::execute_proc_cache_input: A
         *                      comma-delimited list of table names from @a
         *                      inputTableNames from which input data will be
         *                      cached for use in subsequent calls to
         *                      /execute/proc with the @a use_cached_input
         *                      option. Cached input data will be retained
         *                      until the proc status is cleared with the
         *                      /show/proc/status option of /show/proc/status
         *                      and all proc instances using the cached data
         *                      have completed.
         *                              <li>
         *                      gpudb::execute_proc_use_cached_input: A
         *                      comma-delimited list of run IDs (as returned
         *                      from prior calls to /execute/proc) of running
         *                      or completed proc instances from which input
         *                      data cached using the @a cache_input option
         *                      will be used. Cached input data will not be
         *                      used for any tables specified in @a
         *                      inputTableNames, but data from all other tables
         *                      cached for the specified run IDs will be passed
         *                      to the proc. If the same table was cached for
         *                      multiple specified run IDs, the cached data
         *                      from the first run ID specified in the list
         *                      that includes that table will be used.
         *                              <li>
         *                      gpudb::execute_proc_kifs_input_dirs: A
         *                      comma-delimited list of KiFS directories whose
         *                      local files will be made directly accessible to
         *                      the proc through the API. (All KiFS files,
         *                      local or not, are also accessible through the
         *                      file system below the KiFS mount point.) Each
         *                      name specified must the name of an existing
         *                      KiFS directory.
         *                      </ul>
         * 
         */
        ExecuteProcRequest(const std::string& procName_, const std::map<std::string, std::string>& params_, const std::map<std::string, std::vector<uint8_t> >& binParams_, const std::vector<std::string>& inputTableNames_, const std::map<std::string, std::vector<std::string> >& inputColumnNames_, const std::vector<std::string>& outputTableNames_, const std::map<std::string, std::string>& options_):
            procName( procName_ ),
            params( params_ ),
            binParams( binParams_ ),
            inputTableNames( inputTableNames_ ),
            inputColumnNames( inputColumnNames_ ),
            outputTableNames( outputTableNames_ ),
            options( options_ )
        {
        }

        std::string procName;
        std::map<std::string, std::string> params;
        std::map<std::string, std::vector<uint8_t> > binParams;
        std::vector<std::string> inputTableNames;
        std::map<std::string, std::vector<std::string> > inputColumnNames;
        std::vector<std::string> outputTableNames;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ExecuteProcRequest>
    {
        static void encode(Encoder& e, const gpudb::ExecuteProcRequest& v)
        {
            ::avro::encode(e, v.procName);
            ::avro::encode(e, v.params);
            ::avro::encode(e, v.binParams);
            ::avro::encode(e, v.inputTableNames);
            ::avro::encode(e, v.inputColumnNames);
            ::avro::encode(e, v.outputTableNames);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ExecuteProcRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.procName);
                            break;

                        case 1:
                            ::avro::decode(d, v.params);
                            break;

                        case 2:
                            ::avro::decode(d, v.binParams);
                            break;

                        case 3:
                            ::avro::decode(d, v.inputTableNames);
                            break;

                        case 4:
                            ::avro::decode(d, v.inputColumnNames);
                            break;

                        case 5:
                            ::avro::decode(d, v.outputTableNames);
                            break;

                        case 6:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.procName);
                ::avro::decode(d, v.params);
                ::avro::decode(d, v.binParams);
                ::avro::decode(d, v.inputTableNames);
                ::avro::decode(d, v.inputColumnNames);
                ::avro::decode(d, v.outputTableNames);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #executeProc(const ExecuteProcRequest&) const}.
     * <p>
     * Executes a proc. This endpoint is asynchronous and does not wait for the
     * proc to complete before returning.
     */
    struct ExecuteProcResponse
    {

        /**
         * Constructs an ExecuteProcResponse object with default parameter
         * values.
         */
        ExecuteProcResponse() :
            runId(std::string())
        {
        }

        std::string runId;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ExecuteProcResponse>
    {
        static void encode(Encoder& e, const gpudb::ExecuteProcResponse& v)
        {
            ::avro::encode(e, v.runId);
        }

        static void decode(Decoder& d, gpudb::ExecuteProcResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.runId);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.runId);
            }
        }
    };
}

#endif
