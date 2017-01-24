/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __DELETE_PROC_H__
#define __DELETE_PROC_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #deleteProc(const DeleteProcRequest&) const}.
     * <p>
     * Deletes a proc. Any currently running instances of the proc will be
     * killed.
     */
    struct DeleteProcRequest
    {

        /**
         * Constructs a DeleteProcRequest object with default parameter values.
         */
        DeleteProcRequest() :
            procName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a DeleteProcRequest object with the specified parameters.
         * 
         * @param[in] procName_  Name of the proc to be deleted. Must be the
         *                       name of a currently existing proc.
         * @param[in] options_  Optional parameters.  Default value is an empty
         *                      std::map.
         * 
         */
        DeleteProcRequest(const std::string& procName_, const std::map<std::string, std::string>& options_):
            procName( procName_ ),
            options( options_ )
        {
        }

        std::string procName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::DeleteProcRequest>
    {
        static void encode(Encoder& e, const gpudb::DeleteProcRequest& v)
        {
            ::avro::encode(e, v.procName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::DeleteProcRequest& v)
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
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #deleteProc(const DeleteProcRequest&) const}.
     * <p>
     * Deletes a proc. Any currently running instances of the proc will be
     * killed.
     */
    struct DeleteProcResponse
    {

        /**
         * Constructs a DeleteProcResponse object with default parameter
         * values.
         */
        DeleteProcResponse() :
            procName(std::string())
        {
        }

        std::string procName;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::DeleteProcResponse>
    {
        static void encode(Encoder& e, const gpudb::DeleteProcResponse& v)
        {
            ::avro::encode(e, v.procName);
        }

        static void decode(Decoder& d, gpudb::DeleteProcResponse& v)
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

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.procName);
            }
        }
    };
}

#endif
