/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __ALTER_SYSTEM_PROPERTIES_H__
#define __ALTER_SYSTEM_PROPERTIES_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #alterSystemProperties(const AlterSystemPropertiesRequest&) const}.
     * <p>
     * The alter_system_properties endpoint is primarily used to simplify the
     * testing of GPUdb and is not expected to be used during normal execution.
     * Commands are given through the properties_update_map whose keys are
     * commands and values are strings representing integer values (for example
     * '8000') or boolean values ('true' or 'false').
     */
    struct AlterSystemPropertiesRequest
    {

        /**
         * Constructs an AlterSystemPropertiesRequest object with default
         * parameter values.
         */
        AlterSystemPropertiesRequest() :
            propertyUpdatesMap(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AlterSystemPropertiesRequest object with the specified
         * parameters.
         * 
         * @param[in] propertyUpdatesMap_  Map containing the properties of the
         *                                 system to be updated. Error if
         *                                 empty.
         *                                 <ul>
         *                                         <li> sm_omp_threads: Set the
         *                                 number of sm_omp_threads to the
         *                                 specified integer value.
         *                                         <li> kernel_omp_threads: Set
         *                                 the number of kernel_omp_threads to
         *                                 the specified integer value.
         *                                         <li>
         *                                 concurrent_kernel_execution: Enables
         *                                 concurrent kernel execution if the
         *                                 value is 'true' and disables it if
         *                                 the value is 'false'.
         *                                         <li> chunk_size: Sets the
         *                                 chunk size of all new sets to the
         *                                 specified integer value.
         *                                         <li> flush_to_disk: Flushes
         *                                 any changes to any tables to the
         *                                 persistent store.  These changes
         *                                 include updates to the vector store,
         *                                 object store, and text search store,
         *                                 Value string is ignored
         *                                         <li> clear_cache: Clears
         *                                 cached results.  Useful to allow
         *                                 repeated timing of endpoints. Value
         *                                 string is ignored
         *                                         <li> communicator_test:
         *                                 Invoke the communicator test and
         *                                 report timing results. Value string
         *                                 is is a comma separated list of
         *                                 <key>=<value> expressions.
         *                                 Expressions are: num_transactions =
         *                                 <num> where <num> is the number of
         *                                 request reply transactions to invoke
         *                                 per test; message_size = <bytes>
         *                                 where bytes is the size of the
         *                                 messages to send in bytes;
         *                                 check_values = <enabled> where if
         *                                 enabled is true the value of the
         *                                 messages received are verified.
         *                                         <li>
         *                                 set_message_timers_enabled: Enables
         *                                 the communicator test to collect
         *                                 additional timing statistics when
         *                                 the value string is 'true'. Disables
         *                                 the collection when the value string
         *                                 is 'false'
         *                                         <li> bulk_add_test: Invoke
         *                                 the bulk_add test and report timing
         *                                 results. Value string is ignored.
         *                                         <li> network_speed: Invoke
         *                                 the network speed test and report
         *                                 timing results. Value string is a
         *                                 comma separated list of
         *                                 <key>=<value> expressions.
         *                                 Expressions are: seconds = <time>
         *                                 where time is the time in seconds to
         *                                 run the test; data_size = <size>
         *                                 where <size> is the size in bytes of
         *                                 the block to be transferred; threads
         *                                 = <number of threads>; to_ranks =
         *                                 <comma separated list of ranks>
         *                                 where the list of ranks is the ranks
         *                                 that rank 0 will send data to and
         *                                 get data from. If to_ranks is
         *                                 unspecified then all worker ranks
         *                                 are used.
         *                                         <li> request_timeout: Number
         *                                 of minutes after which /filter/ *
         *                                 and /aggregate/ * queries will
         *                                 timeout.
         *                                         <li> max_get_records_size:
         *                                 set max_get_records_size. default
         *                                 20000
         *                                 </ul>
         * @param[in] options_  Optional parameters.  Default value is an empty
         *                      std::map.
         * 
         */
        AlterSystemPropertiesRequest(const std::map<std::string, std::string>& propertyUpdatesMap_, const std::map<std::string, std::string>& options_):
            propertyUpdatesMap( propertyUpdatesMap_ ),
            options( options_ )
        {
        }

        std::map<std::string, std::string> propertyUpdatesMap;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AlterSystemPropertiesRequest>
    {
        static void encode(Encoder& e, const gpudb::AlterSystemPropertiesRequest& v)
        {
            ::avro::encode(e, v.propertyUpdatesMap);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AlterSystemPropertiesRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.propertyUpdatesMap);
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
                ::avro::decode(d, v.propertyUpdatesMap);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #alterSystemProperties(const AlterSystemPropertiesRequest&) const}.
     * <p>
     * The alter_system_properties endpoint is primarily used to simplify the
     * testing of GPUdb and is not expected to be used during normal execution.
     * Commands are given through the properties_update_map whose keys are
     * commands and values are strings representing integer values (for example
     * '8000') or boolean values ('true' or 'false').
     */
    struct AlterSystemPropertiesResponse
    {

        /**
         * Constructs an AlterSystemPropertiesResponse object with default
         * parameter values.
         */
        AlterSystemPropertiesResponse() :
            updatedPropertiesMap(std::map<std::string, std::string>())
        {
        }

        std::map<std::string, std::string> updatedPropertiesMap;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AlterSystemPropertiesResponse>
    {
        static void encode(Encoder& e, const gpudb::AlterSystemPropertiesResponse& v)
        {
            ::avro::encode(e, v.updatedPropertiesMap);
        }

        static void decode(Decoder& d, gpudb::AlterSystemPropertiesResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.updatedPropertiesMap);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.updatedPropertiesMap);
            }
        }
    };
}

#endif
