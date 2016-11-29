/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_TABLE_H__
#define __CREATE_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createTable(const CreateTableRequest&) const}.
     * <p>
     * Creates a new table or collection in GPUdb. If a new table is being
     * created then type of the table is given by @a typeId which must the be
     * the type id of a currently registered type (i.e. one created via {@link
     * #createType(const CreateTypeRequest&) const}). The table will be
     * created inside a collection if the option *collection_name* is
     * specified. If that collection does not already exist then it will be
     * created. To create a new, empty collection specify the collection name
     * in @a tableName, leave @a typeId blank, and set the *is_collection*
     * option to 'true'.
     */
    struct CreateTableRequest
    {

        /**
         * Constructs a CreateTableRequest object with default parameter
         * values.
         */
        CreateTableRequest() :
            tableName(std::string()),
            typeId(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateTableRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName  Name of the table to be created. Must not be
         *                       the name of a currently existing GPUdb table
         *                       of a different type.  Error for requests with
         *                       existing table of the same name and type id
         *                       may be suppressed by using the @a
         *                       no_error_if_exists option.  Cannot be an empty
         *                       string.  Valid characters are
         *                       'A-Za-z0-9_-(){}[] .:' (excluding the single
         *                       quote), with the first character being one of
         *                       'A-Za-z0-9_'.  The maximum length is 256
         *                       characters.
         * @param[in] typeId  ID of a currently registered type in GPUdb. All
         *                    objects added to the newly created table will be
         *                    of this type.  Must be an empty string if the
         *                    *is_collection* is 'true'.
         * @param[in] options  Optional parameters.
         *                     <ul>
         *                             <li> no_error_if_exists: If @a true,
         *                     prevents an error from occurring if the table
         *                     already exists and is of the given type.  If a
         *                     table with the same ID but a different type
         *                     exists, it is still an error. Values: 'true',
         *                     'false'.
         *                             <li> collection_name: Name of a
         *                     collection which is to contain the newly created
         *                     table. If empty, then the newly created table
         *                     will be a top-level table. If the collection
         *                     does not allow duplicate types and it contains a
         *                     table of the same type as the given one, then
         *                     this table creation request will fail.
         *                             <li> is_collection: Indicates whether
         *                     the new table to be created will be a
         *                     collection. Values: 'true', 'false'.
         *                             <li> disallow_homogeneous_tables: For a
         *                     collection, indicates whether the collection
         *                     prohibits containment of multiple tables of
         *                     exactly the same data type. Values: 'true',
         *                     'false'.
         *                             <li> is_replicated: For a table,
         *                     indicates whether the table is to be replicated
         *                     to all the database ranks. This may be necessary
         *                     when the table is to be joined with other tables
         *                     in a query. Values: 'true', 'false'.
         *                             <li> foreign_keys: Semicolon-separated
         *                     list of foreign key constraints, of the format
         *                     'source_column references
         *                     target_table(primary_key_column)'.
         *                     </ul>
         *                       Default value is an empty std::map.
         * 
         */
        CreateTableRequest(const std::string& tableName, const std::string& typeId, const std::map<std::string, std::string>& options):
            tableName(tableName),
            typeId(typeId),
            options(options)
        {
        }

        std::string tableName;
        std::string typeId;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateTableRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateTableRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateTableRequest& v)
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
                            ::avro::decode(d, v.typeId);
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
                ::avro::decode(d, v.typeId);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #createTable(const CreateTableRequest&) const}.
     * <p>
     * Creates a new table or collection in GPUdb. If a new table is being
     * created then type of the table is given by @a typeId which must the be
     * the type id of a currently registered type (i.e. one created via {@link
     * #createType(const CreateTypeRequest&) const}). The table will be
     * created inside a collection if the option *collection_name* is
     * specified. If that collection does not already exist then it will be
     * created. To create a new, empty collection specify the collection name
     * in @a tableName, leave @a typeId blank, and set the *is_collection*
     * option to 'true'.
     */
    struct CreateTableResponse
    {

        /**
         * Constructs a CreateTableResponse object with default parameter
         * values.
         */
        CreateTableResponse() :
            tableName(std::string()),
            typeId(std::string()),
            isCollection(bool())
        {
        }

        std::string tableName;
        std::string typeId;
        bool isCollection;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateTableResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateTableResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.isCollection);
        }

        static void decode(Decoder& d, gpudb::CreateTableResponse& v)
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
                            ::avro::decode(d, v.typeId);
                            break;

                        case 2:
                            ::avro::decode(d, v.isCollection);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.typeId);
                ::avro::decode(d, v.isCollection);
            }
        }
    };
}

#endif
