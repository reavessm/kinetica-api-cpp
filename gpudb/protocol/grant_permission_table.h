/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __GRANT_PERMISSION_TABLE_H__
#define __GRANT_PERMISSION_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #grantPermissionTable(const GrantPermissionTableRequest&) const}.
     * <p>
     * Grants a table-level permission to a user or role.
     */
    struct GrantPermissionTableRequest
    {

        /**
         * Constructs a GrantPermissionTableRequest object with default
         * parameter values.
         */
        GrantPermissionTableRequest() :
            name(std::string()),
            permission(std::string()),
            tableName(std::string()),
            filterExpression(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a GrantPermissionTableRequest object with the specified
         * parameters.
         * 
         * @param[in] name  Name of the user or role to which the permission
         *                  will be granted. Must be an existing user or role.
         * @param[in] permission  Permission to grant to the user or role.
         * @param[in] tableName  Name of the table to which the permission
         *                       grants access. Must be an existing table,
         *                       collection, or view. If a collection, the
         *                       permission also applies to tables and views in
         *                       the collection.
         * @param[in] filterExpression  Reserved for future use.  Default value
         *                              is an empty string.
         * @param[in] options  Optional parameters.
         * 
         */
        GrantPermissionTableRequest(const std::string& name, const std::string& permission, const std::string& tableName, const std::string& filterExpression, const std::map<std::string, std::string>& options):
            name(name),
            permission(permission),
            tableName(tableName),
            filterExpression(filterExpression),
            options(options)
        {
        }

        std::string name;
        std::string permission;
        std::string tableName;
        std::string filterExpression;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::GrantPermissionTableRequest>
    {
        static void encode(Encoder& e, const gpudb::GrantPermissionTableRequest& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.permission);
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.filterExpression);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::GrantPermissionTableRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.name);
                            break;

                        case 1:
                            ::avro::decode(d, v.permission);
                            break;

                        case 2:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 3:
                            ::avro::decode(d, v.filterExpression);
                            break;

                        case 4:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.name);
                ::avro::decode(d, v.permission);
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.filterExpression);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #grantPermissionTable(const GrantPermissionTableRequest&) const}.
     * <p>
     * Grants a table-level permission to a user or role.
     */
    struct GrantPermissionTableResponse
    {

        /**
         * Constructs a GrantPermissionTableResponse object with default
         * parameter values.
         */
        GrantPermissionTableResponse() :
            name(std::string()),
            permission(std::string()),
            tableName(std::string()),
            filterExpression(std::string())
        {
        }

        std::string name;
        std::string permission;
        std::string tableName;
        std::string filterExpression;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::GrantPermissionTableResponse>
    {
        static void encode(Encoder& e, const gpudb::GrantPermissionTableResponse& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.permission);
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.filterExpression);
        }

        static void decode(Decoder& d, gpudb::GrantPermissionTableResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.name);
                            break;

                        case 1:
                            ::avro::decode(d, v.permission);
                            break;

                        case 2:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 3:
                            ::avro::decode(d, v.filterExpression);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.name);
                ::avro::decode(d, v.permission);
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.filterExpression);
            }
        }
    };
}

#endif
