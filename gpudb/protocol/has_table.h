/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __HAS_TABLE_H__
#define __HAS_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #hasTable(const HasTableRequest&) const}.
     * <p>
     * Checks the existence of a table with the given name in GPUdb.
     */
    struct HasTableRequest
    {

        /**
         * Constructs a HasTableRequest object with default parameter values.
         */
        HasTableRequest() :
            tableName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a HasTableRequest object with the specified parameters.
         * 
         * @param[in] tableName  Name of the table to check for existence.
         * @param[in] options  Optional parameters.  Default value is an empty
         *                     std::map.
         * 
         */
        HasTableRequest(const std::string& tableName, const std::map<std::string, std::string>& options):
            tableName(tableName),
            options(options)
        {
        }

        std::string tableName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::HasTableRequest>
    {
        static void encode(Encoder& e, const gpudb::HasTableRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::HasTableRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
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
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #hasTable(const HasTableRequest&) const}.
     * <p>
     * Checks the existence of a table with the given name in GPUdb.
     */
    struct HasTableResponse
    {

        /**
         * Constructs a HasTableResponse object with default parameter values.
         */
        HasTableResponse() :
            tableName(std::string()),
            tableExists(bool())
        {
        }

        std::string tableName;
        bool tableExists;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::HasTableResponse>
    {
        static void encode(Encoder& e, const gpudb::HasTableResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.tableExists);
        }

        static void decode(Decoder& d, gpudb::HasTableResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.tableExists);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.tableExists);
            }
        }
    };
}

#endif