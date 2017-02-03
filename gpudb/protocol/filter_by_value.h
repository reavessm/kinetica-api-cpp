/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_BY_VALUE_H__
#define __FILTER_BY_VALUE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filterByValue(const FilterByValueRequest&) const}.
     * <p>
     * Calculates which objects from a table has a particular value for a
     * particular column. The input parameters provide a way to specify either
     * a String or a Double valued column and a desired value for the column on
     * which the filter is performed. The operation is synchronous, meaning
     * that a response will not be returned until all the objects are fully
     * available. The response payload provides the count of the resulting set.
     * A new result view which satisfies the input filter restriction
     * specification is also created with a view name passed in as part of the
     * input payload.
     */
    struct FilterByValueRequest
    {

        /**
         * Constructs a FilterByValueRequest object with default parameter
         * values.
         */
        FilterByValueRequest() :
            tableName(std::string()),
            viewName(std::string()),
            isString(bool()),
            value(double()),
            valueStr(std::string()),
            columnName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterByValueRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of an existing table on which to perform
         *                        the calculation.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results. Must not be an
         *                       already existing collection, table or view.
         *                       Default value is an empty string.
         * @param[in] isString_  Indicates whether the value being searched for
         *                       is string or numeric.
         * @param[in] value_  The value to search for.  Default value is 0.
         * @param[in] valueStr_  The string value to search for.  Default value
         *                       is an empty string.
         * @param[in] columnName_  Name of a column or an expression of one or
         *                         more columns on which the filter by value
         *                         would be applied.
         * @param[in] options_  Optional parameters.  Default value is an empty
         *                      std::map.
         * 
         */
        FilterByValueRequest(const std::string& tableName_, const std::string& viewName_, const bool isString_, const double value_, const std::string& valueStr_, const std::string& columnName_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            isString( isString_ ),
            value( value_ ),
            valueStr( valueStr_ ),
            columnName( columnName_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        bool isString;
        double value;
        std::string valueStr;
        std::string columnName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByValueRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterByValueRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.isString);
            ::avro::encode(e, v.value);
            ::avro::encode(e, v.valueStr);
            ::avro::encode(e, v.columnName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterByValueRequest& v)
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
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.isString);
                            break;

                        case 3:
                            ::avro::decode(d, v.value);
                            break;

                        case 4:
                            ::avro::decode(d, v.valueStr);
                            break;

                        case 5:
                            ::avro::decode(d, v.columnName);
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
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.isString);
                ::avro::decode(d, v.value);
                ::avro::decode(d, v.valueStr);
                ::avro::decode(d, v.columnName);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filterByValue(const FilterByValueRequest&) const}.
     * <p>
     * Calculates which objects from a table has a particular value for a
     * particular column. The input parameters provide a way to specify either
     * a String or a Double valued column and a desired value for the column on
     * which the filter is performed. The operation is synchronous, meaning
     * that a response will not be returned until all the objects are fully
     * available. The response payload provides the count of the resulting set.
     * A new result view which satisfies the input filter restriction
     * specification is also created with a view name passed in as part of the
     * input payload.
     */
    struct FilterByValueResponse
    {

        /**
         * Constructs a FilterByValueResponse object with default parameter
         * values.
         */
        FilterByValueResponse() :
            count(int64_t())
        {
        }

        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByValueResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterByValueResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::FilterByValueResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
