/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __LOCK_TABLE_H__
#define __LOCK_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #lockTable(const LockTableRequest&) const}.
     * <p>
     * Manages global access to a table's data.  By default a table has a @a
     * lockType of @a unlock, indicating all operations are permitted.  A user
     * may request a @a read-only or a @a write-only lock, after which only
     * read or write operations, respectively, are permitted on the table until
     * the lock is removed.  When @a lockType is @a disable then no operations
     * are permitted on the table.  The lock status can be queried by setting
     * @a lockType to @a status.
     */
    struct LockTableRequest
    {

        /**
         * Constructs a LockTableRequest object with default parameter values.
         */
        LockTableRequest() :
            tableName(std::string()),
            lockType(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a LockTableRequest object with the specified parameters.
         * 
         * @param[in] tableName_  Name of the table to be locked. It must be a
         *                        currently existing table, collection, or
         *                        view.
         * @param[in] lockType_  The type of lock being applied to the table.
         *                       Setting it to @a status will return the
         *                       current lock status of the table without
         *                       changing it. Values: 'status', 'disable',
         *                       'read-only', 'write-only', 'unlock'.
         *                         Default value is 'status'.
         * @param[in] options_  Optional parameters.  Default value is an empty
         *                      std::map.
         * 
         */
        LockTableRequest(const std::string& tableName_, const std::string& lockType_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            lockType( lockType_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string lockType;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::LockTableRequest>
    {
        static void encode(Encoder& e, const gpudb::LockTableRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.lockType);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::LockTableRequest& v)
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
                            ::avro::decode(d, v.lockType);
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
                ::avro::decode(d, v.lockType);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #lockTable(const LockTableRequest&) const}.
     * <p>
     * Manages global access to a table's data.  By default a table has a @a
     * lockType of @a unlock, indicating all operations are permitted.  A user
     * may request a @a read-only or a @a write-only lock, after which only
     * read or write operations, respectively, are permitted on the table until
     * the lock is removed.  When @a lockType is @a disable then no operations
     * are permitted on the table.  The lock status can be queried by setting
     * @a lockType to @a status.
     */
    struct LockTableResponse
    {

        /**
         * Constructs a LockTableResponse object with default parameter values.
         */
        LockTableResponse() :
            lockType(std::string())
        {
        }

        std::string lockType;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::LockTableResponse>
    {
        static void encode(Encoder& e, const gpudb::LockTableResponse& v)
        {
            ::avro::encode(e, v.lockType);
        }

        static void decode(Decoder& d, gpudb::LockTableResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.lockType);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.lockType);
            }
        }
    };
}

#endif
