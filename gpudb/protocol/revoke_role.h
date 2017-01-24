/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __REVOKE_ROLE_H__
#define __REVOKE_ROLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #revokeRole(const RevokeRoleRequest&) const}.
     * <p>
     * Revokes membership in a role from a user or role.
     */
    struct RevokeRoleRequest
    {

        /**
         * Constructs a RevokeRoleRequest object with default parameter values.
         */
        RevokeRoleRequest() :
            role(std::string()),
            member(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a RevokeRoleRequest object with the specified parameters.
         * 
         * @param[in] role_  Name of the role in which membership will be
         *                   revoked. Must be an existing role.
         * @param[in] member_  Name of the user or role that will be revoked
         *                     membership in @a role. Must be an existing user
         *                     or role.
         * @param[in] options_  Optional parameters.
         * 
         */
        RevokeRoleRequest(const std::string& role_, const std::string& member_, const std::map<std::string, std::string>& options_):
            role( role_ ),
            member( member_ ),
            options( options_ )
        {
        }

        std::string role;
        std::string member;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::RevokeRoleRequest>
    {
        static void encode(Encoder& e, const gpudb::RevokeRoleRequest& v)
        {
            ::avro::encode(e, v.role);
            ::avro::encode(e, v.member);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::RevokeRoleRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.role);
                            break;

                        case 1:
                            ::avro::decode(d, v.member);
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
                ::avro::decode(d, v.role);
                ::avro::decode(d, v.member);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #revokeRole(const RevokeRoleRequest&) const}.
     * <p>
     * Revokes membership in a role from a user or role.
     */
    struct RevokeRoleResponse
    {

        /**
         * Constructs a RevokeRoleResponse object with default parameter
         * values.
         */
        RevokeRoleResponse() :
            role(std::string()),
            member(std::string())
        {
        }

        std::string role;
        std::string member;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::RevokeRoleResponse>
    {
        static void encode(Encoder& e, const gpudb::RevokeRoleResponse& v)
        {
            ::avro::encode(e, v.role);
            ::avro::encode(e, v.member);
        }

        static void decode(Decoder& d, gpudb::RevokeRoleResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.role);
                            break;

                        case 1:
                            ::avro::decode(d, v.member);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.role);
                ::avro::decode(d, v.member);
            }
        }
    };
}

#endif
