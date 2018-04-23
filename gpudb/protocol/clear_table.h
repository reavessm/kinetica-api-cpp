/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CLEAR_TABLE_H__
#define __CLEAR_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #clearTable(const ClearTableRequest&) const}.
     * <p>
     * Clears (drops) one or all tables in the database cluster. The operation
     * is synchronous meaning that the table will be cleared before the
     * function returns. The response payload returns the status of the
     * operation along with the name of the table that was cleared.
     */
    struct ClearTableRequest
    {

        /**
         * Constructs a ClearTableRequest object with default parameter values.
         */
        ClearTableRequest() :
            tableName(std::string()),
            authorization(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a ClearTableRequest object with the specified parameters.
         * 
         * @param[in] tableName_  Name of the table to be cleared. Must be an
         *                        existing table. Empty string clears all
         *                        available tables, though this behavior is be
         *                        prevented by default via gpudb.conf parameter
         *                        'disable_clear_all'.
         * @param[in] authorization_  No longer used. User can pass an empty
         *                            string.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::clear_table_no_error_if_not_exists: If
         *                      @a true and if the table specified in @a
         *                      tableName does not exist no error is returned.
         *                      If @a false and if the table specified in @a
         *                      tableName does not exist then an error is
         *                      returned.
         *                      <ul>
         *                              <li> gpudb::clear_table_true
         *                              <li> gpudb::clear_table_false
         *                      </ul>
         *                      The default value is gpudb::clear_table_false.
         *                      </ul>
         * 
         */
        ClearTableRequest(const std::string& tableName_, const std::string& authorization_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            authorization( authorization_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string authorization;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ClearTableRequest>
    {
        static void encode(Encoder& e, const gpudb::ClearTableRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.authorization);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ClearTableRequest& v)
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
                            ::avro::decode(d, v.authorization);
                            break;

                        case 2:
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
                ::avro::decode(d, v.authorization);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #clearTable(const ClearTableRequest&) const}.
     * <p>
     * Clears (drops) one or all tables in the database cluster. The operation
     * is synchronous meaning that the table will be cleared before the
     * function returns. The response payload returns the status of the
     * operation along with the name of the table that was cleared.
     */
    struct ClearTableResponse
    {

        /**
         * Constructs a ClearTableResponse object with default parameter
         * values.
         */
        ClearTableResponse() :
            tableName(std::string())
        {
        }

        std::string tableName;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ClearTableResponse>
    {
        static void encode(Encoder& e, const gpudb::ClearTableResponse& v)
        {
            ::avro::encode(e, v.tableName);
        }

        static void decode(Decoder& d, gpudb::ClearTableResponse& v)
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

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
            }
        }
    };
}

#endif
