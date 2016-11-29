/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_UNION_H__
#define __CREATE_UNION_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createUnion(const CreateUnionRequest&) const}.
     * <p>
     * Creates a table that is the union of one or more existing tables.
     */
    struct CreateUnionRequest
    {

        /**
         * Constructs a CreateUnionRequest object with default parameter
         * values.
         */
        CreateUnionRequest() :
            tableName(std::string()),
            tableNames(std::vector<std::string>()),
            inputColumnNames(std::vector<std::vector<std::string> >()),
            outputColumnNames(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateUnionRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName  Name of the table to be created. Must not be
         *                       the name of a currently existing GPUdb table.
         *                       Cannot be an empty string.
         * @param[in] tableNames  The list of table names making up the union.
         *                        Must contain the names of one or more
         *                        existing tables.
         * @param[in] inputColumnNames  The list of columns from each of the
         *                              corresponding input tables.
         * @param[in] outputColumnNames  The list of names of the columns to be
         *                               stored in the union.
         * @param[in] options  Optional parameters.
         *                     <ul>
         *                             <li> collection_name: Name of a
         *                     collection which is to contain the union. If
         *                     empty, then the union will be a top-level table.
         *                             <li> mode: If 'merge_views' then this
         *                     operation will merge (i.e. union) the provided
         *                     views. All 'table_names' must be views from the
         *                     same underlying base table. Values: 'normal',
         *                     'merge_views'.
         *                     </ul>
         *                       Default value is an empty std::map.
         * 
         */
        CreateUnionRequest(const std::string& tableName, const std::vector<std::string>& tableNames, const std::vector<std::vector<std::string> >& inputColumnNames, const std::vector<std::string>& outputColumnNames, const std::map<std::string, std::string>& options):
            tableName(tableName),
            tableNames(tableNames),
            inputColumnNames(inputColumnNames),
            outputColumnNames(outputColumnNames),
            options(options)
        {
        }

        std::string tableName;
        std::vector<std::string> tableNames;
        std::vector<std::vector<std::string> > inputColumnNames;
        std::vector<std::string> outputColumnNames;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateUnionRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateUnionRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.inputColumnNames);
            ::avro::encode(e, v.outputColumnNames);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateUnionRequest& v)
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
                            ::avro::decode(d, v.tableNames);
                            break;

                        case 2:
                            ::avro::decode(d, v.inputColumnNames);
                            break;

                        case 3:
                            ::avro::decode(d, v.outputColumnNames);
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
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.tableNames);
                ::avro::decode(d, v.inputColumnNames);
                ::avro::decode(d, v.outputColumnNames);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #createUnion(const CreateUnionRequest&) const}.
     * <p>
     * Creates a table that is the union of one or more existing tables.
     */
    struct CreateUnionResponse
    {

        /**
         * Constructs a CreateUnionResponse object with default parameter
         * values.
         */
        CreateUnionResponse() :
            tableName(std::string())
        {
        }

        std::string tableName;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateUnionResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateUnionResponse& v)
        {
            ::avro::encode(e, v.tableName);
        }

        static void decode(Decoder& d, gpudb::CreateUnionResponse& v)
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
